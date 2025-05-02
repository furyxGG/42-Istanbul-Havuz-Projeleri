/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 04:53:58 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/16 06:04:11 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = size - 1;
	while (a <= b)
	{
		c = tab[a];
		tab[a] = tab[b];
		tab[b] = c;
		a++;
		b--;
	}
}
