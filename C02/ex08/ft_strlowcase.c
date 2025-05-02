/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 06:00:37 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/22 00:29:05 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 65 && str[a] <= 90)
			str[a] = str[a] + 32;
		a++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	a[] = "asdgasdgASDFGASDG ASDGASDGsadg ?*_";
	ft_strlowcase(a);
	printf("%s", a);
}*/
