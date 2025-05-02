/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:55:02 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/24 16:32:13 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_find_next_prime(int nb)
{
	int	a;
	int	b;
	int	check;

	a = nb;
	if (nb <= 2)
		return (2);
	while (a)
	{
		check = 0;
		b = 2;
		while (b < nb)
		{
			if (a % b == 0)
				check += 1;
			b++;
		}
		if (check == 0)
			return (a);
		a++;
	}
	return (0);
}
