/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:53:17 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/30 21:24:16 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQLIB.h"

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
