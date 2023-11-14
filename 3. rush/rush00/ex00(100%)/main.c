/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:39:25 by asplavni          #+#    #+#             */
/*   Updated: 2023/10/01 15:36:49 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	rush(int x, int y);

int	string_to_int(const char *str)
{
	int	result;

	result = 0;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			result = result * 10 + (*str - '0');
			str++;
		}
		else
		{
			return (-1);
		}
	}
	return (result);
}

int	main(int argc, char *argv[])
{
	int	value_of_x;
	int	value_of_y;

	if (argc != 3)
	{
		write(1, "Exception: wrong number of arguments.\n", 38);
		return (1);
	}
	value_of_x = string_to_int(argv[1]);
	value_of_y = string_to_int(argv[2]);
	if (value_of_x > 0 && value_of_y > 0)
		rush(value_of_x, value_of_y);
	else
		write(1, "Exception: Wrong arguments.\n", 28);
	return (0);
}
