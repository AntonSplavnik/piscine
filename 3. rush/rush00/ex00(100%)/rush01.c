/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:39:34 by asplavni          #+#    #+#             */
/*   Updated: 2023/09/30 13:39:37 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

char	char_check(int x, int y, int i, int j)
{
	if (i == 0 && j == 0)
		return ('/');
	else if ((i == 0 && j == x - 1))
		return ('\\');
	else if (i == y - 1 && j == 0)
		return ('\\');
	else if (i == y -1 && j == x - 1)
		return ('/');
	else if (i == 0)
		return ('*');
	else if (i == y - 1)
		return ('*');
	else if (j == 0)
		return ('*'); 
	else if (j == x -1)
		return ('*');
	else
		return (' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
	{
		write(1, "Exceptions: Wrong input!", 24);
		return ;
	}
	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			ft_putchar(char_check(x, y, i, j));
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
