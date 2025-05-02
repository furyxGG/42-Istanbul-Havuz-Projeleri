/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:36:55 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/21 20:20:03 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	arr1[] = "Asfdasfasdfdasf";
	char	arr2[] = "Merhaba";

	ft_strcpy(arr1, arr2);

	int	size;

	size = sizeof(arr2) / sizeof(arr2[0]);
	for(int i = 0; i < size; i++)
	{
		write(1, &arr2[i], 1);
	}
}*/
