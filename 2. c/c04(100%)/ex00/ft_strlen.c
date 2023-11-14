/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:15:58 by antonsplavn       #+#    #+#             */
/*   Updated: 2023/10/19 14:46:50 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>
int main()
{
    char inputString[] = "Hello, World!";
    int length = ft_strlen(inputString);

    printf("Length of the string \"%s\" is: %d\n", inputString, length);

    return 0;
}
*/
