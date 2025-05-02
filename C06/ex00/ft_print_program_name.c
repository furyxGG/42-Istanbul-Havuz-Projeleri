/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:48:00 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/27 16:57:24 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;

	(void) argc;
	a = 0;
	while (argv[0][a])
	{
		write(1, &argv[0][a], 1);
		a++;
	}
	write(1, "\n", 1);
}
