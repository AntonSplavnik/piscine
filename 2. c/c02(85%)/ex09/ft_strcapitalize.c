/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:09:51 by asplavni          #+#    #+#             */
/*   Updated: 2023/10/17 14:24:01 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanumeric(char c)
{
	if (!((c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize_next;

	i = -1;
	capitalize_next = 1;
	while (str[++i])
	{
		if (is_alphanumeric(str[i]))
		{
			if (capitalize_next)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
				capitalize_next = 0;
			}
			else
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 32;
			}
		}
		else
			capitalize_next = 1;
	}
	return (str);
}

/*
#include <stdio.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
	int	i = 0;

	char *text = argv[1];

	if (argc < 0)
		return (0);

	ft_strcapitalize (text);

	while (text[i])
	{
		write(1, &text[i], 1);
		i++;
	}

	return (0);
}
*/
