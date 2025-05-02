/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 21:06:36 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/30 23:16:10 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQLIB.h"

int	main(int argc, char **argv)
{
	int	a;

	a = 1;
	if (argc == 1)
	{
		ft_read_stdin();
		ft_print_map("output");
		ft_putstr("\n");
	}	
	else
	{
		while (argv[a])
		{
			ft_print_map(argv[a]);
			ft_putstr("\n");
			a++;
		}
	}
}
