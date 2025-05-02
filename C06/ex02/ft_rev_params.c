/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:48:21 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/27 17:04:10 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	a = 0;
	if (argc == 1)
		return (0);
	while (argv[a])
		a++;
	while (a > 1)
	{
		b = 0;
		while (argv[a - 1][b])
		{
			write(1, &argv[a - 1][b], 1);
			b++;
		}
		if (a != 1)
			write(1, "\n", 1);
		a--;
	}
}
