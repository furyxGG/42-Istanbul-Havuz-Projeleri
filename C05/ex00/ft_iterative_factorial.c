/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 05:53:08 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/24 16:31:26 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	sum;
	int	a;

	sum = 1;
	a = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (a)
	{
		sum = sum * a;
		a--;
	}
	return (sum);
}
