/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:27:44 by asplavni          #+#    #+#             */
/*   Updated: 2023/10/17 14:24:07 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	index;

	count = 0;
	index = 0;
	while (src[count] != '\0')
		count++;
	if (size != 0)
	{
		while (src[index] != '\0' && index < (size - 1))
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (count);
}

/*
#include <unistd.h>
int main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);

	char *text = argv[1];
	char copied_text[10];

	int count = ft_strlcpy(copied_text, text, 10);

	int i = 0;
	while(copied_text[i])
	{
		write(1, &copied_text[i], 1);
		i++;
	}
	return (0);
}
*/
