/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:41:18 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/23 18:43:43 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}
/*
#include <stdio.h>
int	main()
{
	char	a[] = "Selam naber?";
	printf("%d", ft_strlen(a));
}*/
