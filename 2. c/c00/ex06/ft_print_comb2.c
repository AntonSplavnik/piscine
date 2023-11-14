/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:22:37 by asplavni          #+#    #+#             */
/*   Updated: 2023/10/03 17:22:46 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar2(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putint(int num, int max)
{
	char	ch_u;
	char	ch_d;

	if (num <= 9)
	{
		ch_u = num + 48;
		ft_putchar2('0', ch_u);
	}
	else if (num <= max)
	{
		ch_u = (num % 10) + 48;
		ch_d = (num / 10) + 48;
		ft_putchar2(ch_d, ch_u);
	}
}

void	ft_catint(int fir, int sec)
{
	int	maxfirst;
	int	maxlast;

	maxfirst = 98;
	maxlast = 99;
	ft_putint(fir, maxfirst);
	write(1, " ", 1);
	ft_putint(sec, maxlast);
	if (fir != maxfirst || sec != maxlast)
		ft_putchar2(',', ' ');
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_catint(first, second);
			second++;
		}
		first++;
	}
}

/*
int main(void)
{
    ft_print_comb2();
    return (0);
}
*/