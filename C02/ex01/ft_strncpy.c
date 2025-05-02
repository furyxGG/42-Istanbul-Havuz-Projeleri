/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 03:02:52 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/22 00:27:47 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	a[20];
	char	b[] = "Merhaba";

	ft_strncpy(a, b, 4);
	int	d;

	d = 0;
	while (a[d] != '\0')
	{
		write(1, &a[d], 1);
		d++;	
	}
	write(1, "\n", 1);
	return 0;
//	char	a[20];
//	char	b[] = "Merhaba selam.";
//
//	ft_strncpy(a, b, 5);
//	printf("%s \n", a);
//	return 0;
}*/
