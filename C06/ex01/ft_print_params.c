/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:48:13 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/27 16:59:46 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	if (argc == 1)
		return (0);
	a = 1;
	while (argv[a])
	{
		b = 0;
		while (argv[a][b])
		{
			write(1, &argv[a][b], 1);
			b++;
		}
		if (argv[a])
			write(1, "\n", 1);
		a++;
	}
}
