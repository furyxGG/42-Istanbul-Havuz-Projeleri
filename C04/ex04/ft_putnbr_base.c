/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 02:20:58 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/24 12:33:47 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	size;
	int	a;

	size = 0;
	while (base[size])
	{
		if (base[size] == '+' || base[size] == '-'
			|| base[size] < 32 || base[size] > 126)
		{
			return (0);
		}
		a = size + 1;
		while (base[a])
		{
			if (base[a] == base[size])
				return (0);
			a++;
		}
		size++;
	}
	if (size <= 1)
		return (0);
	return (size);
}

void	ft_min_putnbr(unsigned int nbr, unsigned int size, char *base)
{
	if (nbr >= size)
	{	
		ft_min_putnbr(nbr / size, size, base);
		ft_min_putnbr(nbr % size, size, base);
	}
	else
		ft_putchar(base[nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = check_base(base);
	if (size == 0)
		return ;
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_min_putnbr(2147483648, size, base);
	}
	else
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = nbr * (-1);
		}
		if (nbr >= size)
		{
			ft_putnbr_base(nbr / size, base);
			ft_putnbr_base(nbr % size, base);
		}
		if (nbr < size)
			ft_putchar(base[nbr]);
	}
}
/*
#include <stdio.h>
int	main()
{
	int	a = 100;
	char	*b = "01234156789";

	ft_putnbr_base(a, b);
}*/
