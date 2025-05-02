/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:59:24 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/24 05:30:38 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	a;
	int	sum;

	sign = 1;
	a = 0;
	sum = 0;
	while (str[a] == ' ' || str[a] == '\t' || str[a] == '\n'
		|| str[a] == '\v' || str[a] == '\f' || str[a] == '\r')
	{
		a++;
	}
	while (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
			sign = sign * -1;
		a++;
	}
	while (str[a] >= 48 && str[a] <= 57)
	{
		sum = (sum * 10 + (str[a] - '0'));
		a++;
	}
	return (sum * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main()
{
	char	a[] = "--1234ab567";
	printf("%d\n", ft_atoi(a));
	printf("%d\n", atoi(a));
}*/
