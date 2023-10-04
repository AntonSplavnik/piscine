/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:01:43 by asplavni          #+#    #+#             */
/*   Updated: 2023/10/03 18:01:46 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	first_symbol;
	char	last_sybmol;

	first_symbol = '0';
	last_sybmol = '9';
	while (first_symbol <= last_sybmol)
	{
		write (1, &first_symbol, 1);
		first_symbol++;
	}
}
