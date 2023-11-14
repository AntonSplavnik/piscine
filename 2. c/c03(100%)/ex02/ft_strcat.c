/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:42:06 by antonsplavn       #+#    #+#             */
/*   Updated: 2023/10/18 20:42:16 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	c;

	c = ft_strlen(dest);
	while (*src != '\0')
	{
		dest[c] = *src;
		src++;
		c++;
	}
	dest[c] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int main()
{
    char dest[100] = "Hello, ";
    char src[] = "world!";

    printf("Original dest: %s\n", dest);
    ft_strcat(dest, src);
    printf("Concatenated dest: %s\n", dest);

    int length = ft_strlen(dest);
    printf("Length of concatenated string: %d\n", length);

    return 0;
}
*/
