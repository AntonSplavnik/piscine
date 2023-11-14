/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:30:44 by antonsplavn       #+#    #+#             */
/*   Updated: 2023/10/18 19:38:17 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	int	result;

	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	result = *(unsigned char *)s1 - *(unsigned char *)s2;
	if (result == 0)
		return (0);
	else if (result < 0)
		return (-1);
	else
		return (1);
}

/*
#include <stdio.h>
int main()
{
    char str1[] = "b";
    char str2[] = "b";

    int result = ft_strcmp(str1, str2);
	printf("%d", result);
}
*/
/*
if (result == 0) {
    return 0; // The strings are equal.
} else if (result < 0) {
    return -1; // str1 is less than str2.
} else {
    return 1; // str1 is greater than str2.
}
    */
