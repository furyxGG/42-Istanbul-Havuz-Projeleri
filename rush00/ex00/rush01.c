/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:31:47 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/13 23:23:43 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	r;
	int	c;

	if (x <= 0 || y <= 0)
		return ;
	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((r == 1 && c == 1) || (r == y && c == x && x != 1 && y != 1))
				ft_putchar('/');
			else if ((r == y && c == 1) || (r == 1 && c == x))
				ft_putchar('\\');
			else if (c == 1 || r == 1 || c == x || r == y)
				ft_putchar('*');
			else
				ft_putchar(' ');
			c++;
		}
		r++;
		ft_putchar('\n');
	}
}
