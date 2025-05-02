/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 00:49:24 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/14 06:43:24 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	x;
	char	p;

	x = 'N';
	p = 'P';
	if (n >= 0)
		write(1, &p, 1);
	else
		write(1, &x, 1);
}
