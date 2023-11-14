/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 19:33:36 by asplavni          #+#    #+#             */
/*   Updated: 2023/10/17 13:53:14 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc != 2)
		return (0);

    char *text = argv[1];
    int result = ft_str_is_lowercase(text);
	if (result == 1)
    	printf("Only lowercase\n");
	else
		printf("Contains other characters\n");
    return (0);
}
*/
