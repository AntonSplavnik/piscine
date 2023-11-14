/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:07:38 by asplavni          #+#    #+#             */
/*   Updated: 2023/10/03 18:07:53 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	first_letter;

	first_letter = 'a';
	while (first_letter <= 'z')
	{
		write(1, &first_letter, 1);
		first_letter++;
	}
}
