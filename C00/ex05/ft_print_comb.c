/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 03:02:33 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/14 06:45:34 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	just_print(char comb[])
{
	if (comb[0] == '7' && comb[1] == '8' && comb[2] == '9')
	{
		write(1, comb, 3);
	}
	else
	{
		write(1, comb, 5);
	}
}

void	ft_print_comb(void)
{
	char	comb[5];

	comb[0] = '0';
	comb[3] = ',';
	comb[4] = ' ';
	while (comb[0] <= '7')
	{
		comb[1] = comb[0] + 1;
		while (comb[1] <= '8')
		{
			comb[2] = comb[1] + 1;
			while (comb[2] <= '9')
			{
				just_print(comb);
				comb[2]++;
			}
			comb[1]++;
		}
		comb[0]++;
	}
}
