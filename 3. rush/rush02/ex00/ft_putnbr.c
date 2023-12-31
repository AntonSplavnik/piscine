/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:32:56 by asplavni          #+#    #+#             */
/*   Updated: 2023/10/14 16:34:57 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void ft_putnbr(int nb) 
{
    if (nb < 0) {
        write(1, "-", 1);
        nb = -nb;
    }

    if (nb >= 10) {
        ft_putnbr(nb / 10);
    }

    char char_to_print = ('0' + (nb % 10));
	write(1, &char_to_print, 1);
}
