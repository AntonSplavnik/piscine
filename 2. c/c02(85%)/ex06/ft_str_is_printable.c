/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 19:31:25 by asplavni          #+#    #+#             */
/*   Updated: 2023/10/17 14:25:12 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int main(void)
{

    int output = ft_str_is_printable("hello1234ad");

	if (output == 1)
		printf("Parameter contains only printable characters\n");
	else
		printf("Contains other characters\n");
    return (0);
}
*/
