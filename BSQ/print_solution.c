/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_solution.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:47:54 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/30 23:04:31 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQLIB.h"

int	*ft_find_max_index(int **arr, char *file_name)
{
	int	a;
	int	b;
	int	*inf;

	inf = malloc(3 * sizeof(int));
	ft_solve_bsq_numarr(&arr, file_name);
	a = 0;
	inf[0] = 0;
	while (a < ft_line_size(file_name) - 1)
	{
		b = 0;
		while (b < ft_column_size(file_name) - 1)
		{
			if (inf[0] < arr[a][b])
			{
				inf[0] = arr[a][b];
				inf[1] = a;
				inf[2] = b;
			}
			b++;
		}
		a++;
	}
	return (inf);
}

void	ft_draw_map(char ***buff, char *file_name)
{
	int	**arr;
	int	*inf;
	int	a;
	int	b;

	inf = malloc(3 * sizeof(int));
	arr = ft_create_num_map(ft_read_file(file_name), file_name);
	ft_solve_bsq_numarr(&arr, file_name);
	inf = ft_find_max_index(arr, file_name);
	a = inf[1] - inf[0] + 1;
	while (a <= inf[1])
	{
		b = inf[2] - inf[0] + 1;
		while (b <= inf[2])
		{
			(*buff)[a][b] = ft_get_fill(ft_get_fline(file_name));
			b++;
		}
		a++;
	}
}
