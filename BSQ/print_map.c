/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 21:13:27 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/30 22:52:20 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQLIB.h"

void	ft_print_map(char *file_name)
{
	int		c;
	int		d;
	char	**buff;

	if (ft_check_map(file_name))
	{
		c = 0;
		buff = ft_read_file(file_name);
		ft_draw_map(&buff, file_name);
		while (c < ft_line_size(file_name) - 1)
		{
			d = 0;
			while (d < ft_column_size(file_name) - 1)
			{
				printf("%c", buff[c][d]);
				d++;
			}
			printf("\n");
			c++;
		}
	}
}
