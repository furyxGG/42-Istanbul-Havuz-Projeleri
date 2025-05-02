/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 06:04:52 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/17 23:03:58 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	c;
	int	temp;

	a = 0;
	b = size;
	while (a < b)
	{
		c = a + 1;
		while (c < b)
		{
			if (tab[a] > tab[c])
			{
				temp = tab[a];
				tab[a] = tab[c];
				tab[c] = temp;
			}
			c++;
		}
		a++;
	}
}
