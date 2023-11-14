/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:17:43 by asplavni          #+#    #+#             */
/*   Updated: 2023/10/17 13:43:59 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

int	main() {
	char src[] = "Hello, World!";
	char dest[20];
	unsigned int n = 5;  // Number of characters to copy

	ft_strncpy (dest, src, n);

	printf ("Source: %s\n", src);
	printf ("Destination: %s\n", dest);

	return (0);
}
*/
