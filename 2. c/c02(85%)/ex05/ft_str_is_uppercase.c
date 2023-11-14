/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 19:31:49 by asplavni          #+#    #+#             */
/*   Updated: 2023/10/17 13:54:51 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(int argc, char* argv[])
{
	if (argc != 2)
		return (0);

	char *text = argv[1];

    int result = ft_str_is_uppercase(text);

	if (result == 1)
    	printf("Only uppercase alphabetical characters\n");
	else
		printf("Contains other character\n");
    return (0);
}
*/
