/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 03:53:17 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/14 06:45:59 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_screen(int numb)
{
	char	c;

	if (numb < 10)
	{
		c = numb + 48;
		write(1, "0", 1);
		write(1, &c, 1);
		return ;
	}
	c = (numb / 10) + 48;
	write(1, &c, 1);
	c = numb % 10 + 48;
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	vari[2];

	vari[0] = 0;
	while (vari[0] < 99)
	{
		vari[1] = vari[0] + 1;
		while (vari[1] < 100)
		{
			if (vari[1] > vari[0])
			{
				print_screen(vari[0]);
				write(1, " ", 1);
				print_screen(vari[1]);
				if (vari[0] == 98 && vari[1] == 99)
					return ;
				else
					write(1, ", ", 2);
			}
			vari[1]++;
		}
		vari[0]++;
	}
}
