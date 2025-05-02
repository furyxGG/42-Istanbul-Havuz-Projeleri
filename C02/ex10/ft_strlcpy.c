/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 07:20:35 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/21 20:27:20 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	srclen;
	unsigned int	i;

	srclen = 0;
	i = 0;
	while (src[srclen] != '\0')
		srclen++;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srclen);
}
/*
#include <stdio.h>
int	main(void)
{
	char	dest[20];
	char	src[] = "Deneme bir metin.";

	ft_strlcpy(dest, src, 5);
	printf("%s\n", dest);
}*/
