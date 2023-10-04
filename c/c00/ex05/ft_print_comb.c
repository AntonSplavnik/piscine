/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:23:28 by asplavni          #+#    #+#             */
/*   Updated: 2023/10/03 17:46:28 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	output(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	fr_di;
	char	sec_di;
	char	th_di;

	fr_di = '0';
	while (fr_di <= '7')
	{
		sec_di = fr_di + 1;
		while (sec_di <= '8')
		{
			th_di = sec_di + 1;
			while (th_di <= '9')
			{
				output(fr_di, sec_di, th_di);
				th_di++;
			}
			sec_di++;
		}
		fr_di++;
	}
}

/*
int main(void)
{
    ft_print_comb();
    return (0);
}
*/