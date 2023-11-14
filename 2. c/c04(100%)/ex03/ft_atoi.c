/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:14:13 by rtayache          #+#    #+#             */
/*   Updated: 2023/10/19 19:08:41 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_negative(char *str)
{
	int	i;
	int	c;
	int	r;

	i = 0;
	c = 0;
	r = 1;
	while (str[i])
	{
		if (str[i] == '-')
			c++;
		if (str[i] >= '0' && str[i] <= '9')
			break ;
		i++;
	}
	if (c % 2 != 0)
		r = -1;
	return (r);
}

int	ft_atoi(char *str)
{
	int	res;
	int	i;
	int	s;

	s = 0;
	res = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	if ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		return (res);
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * is_negative(str));
}

/*
#include <stdio.h>

int main() {
    char inputStr1[] = " 42";
    char inputStr2[] = " -123";
    char inputStr3[] = "abc123";
    char inputStr4[] = "  789xyz";
    char inputStr5[] = "0";

    int num1 = ft_atoi(inputStr1);
    int num2 = ft_atoi(inputStr2);
    int num3 = ft_atoi(inputStr3);
    int num4 = ft_atoi(inputStr4);
    int num5 = ft_atoi(inputStr5);

    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);
    printf("Number 3: %d\n", num3);
    printf("Number 4: %d\n", num4);
    printf("Number 5: %d\n", num5);

    return 0;
}
*/
