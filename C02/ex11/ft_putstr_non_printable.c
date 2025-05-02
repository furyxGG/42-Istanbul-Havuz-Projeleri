/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:27:00 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/23 20:46:53 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printhex(int number)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (number > 16)
	{
		printhex(number / 16);
		printhex(number % 16);
	}
	else
		write(1, &hex[number], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if ((*str <= 31 && *str >= 0) || (*str == 127))
		{
			write(1, "\\", 1);
			if (*str < 16)
				write(1, "0", 1);
			printhex(*str);
		}
		else
			write(1, str, 1);
		str++;
	}
}
/*
int	main(void)
{
	char	*str = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
}*/
