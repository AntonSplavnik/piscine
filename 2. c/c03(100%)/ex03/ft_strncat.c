/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:51:55 by antonsplavn       #+#    #+#             */
/*   Updated: 2023/10/18 20:41:58 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	d;

	c = 0;
	d = 0;
	while (dest[c] != '\0')
		c++;
	while (src[d] != '\0' && d < nb)
	{
		dest [c + d] = src[d];
		d++;
	}
	dest [c + d] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int main()
{
    char dest[100] = "Hello, ";
    char src[] = "world!";
    unsigned int n = 5; // Number of characters to concatenate

    printf("Original dest: %s\n", dest);
    ft_strncat(dest, src, n);
    printf("Concatenated dest: %s\n", dest);

    return 0;
}
*/
