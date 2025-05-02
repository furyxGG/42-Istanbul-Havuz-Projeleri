/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 05:15:23 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/27 09:39:47 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	a;

	destlen = 0;
	a = 0;
	srclen = 0;
	while (dest[destlen])
		destlen++;
	while (src[srclen])
		srclen++;
	if (size <= destlen)
		return (size + srclen);
	while (src[a] && destlen + a < size - 1)
	{
		dest[destlen + a] = src[a];
		a++;
	}
	dest[destlen + a] = '\0';
	return (destlen + srclen);
}

#include <stdio.h>

int	main()
{
	char	dest[20] = "Selam";
	char	src[] = " naber?";

	ft_strlcat(dest, src, 20);
	printf("%s", dest);
}
