/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 19:33:46 by asplavni          #+#    #+#             */
/*   Updated: 2023/10/17 13:51:35 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main (int argc, char *argv[])
{
	if (argc != 2)
		return (0);

	char *text = argv[1];

    int answer = ft_str_is_numeric(text);

	if(answer == 1)
		printf("Numeric");
	else
		printf("Non-Numeric");

    return (0);
}
*/
