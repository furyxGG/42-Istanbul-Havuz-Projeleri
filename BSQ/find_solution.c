/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_solution.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:20:38 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/30 22:30:55 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQLIB.h"

int	**ft_create_num_map(char **buff, char *file_name)
{
	int	a;
	int	b;
	int	**arr;
	int	csize;
	int	lsize;

	csize = ft_column_size(file_name);
	lsize = ft_line_size(file_name);
	arr = malloc((lsize - 1) * sizeof(int *));
	a = 0;
	while (a < lsize - 1)
	{
		b = 0;
		arr[a] = malloc((csize - 1) * sizeof(int));
		while (b < csize - 1)
		{
			if (buff[a][b] == ft_get_barrier(ft_get_fline(file_name)))
				arr[a][b] = 0;
			else if (buff[a][b] == ft_get_empty(ft_get_fline(file_name)))
				arr[a][b] = 1;
			b++;
		}
		a++;
	}
	return (arr);
}

int	ft_get_min(int a, int b, int c)
{
	int	min;

	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	return (min);
}

void	ft_solve_bsq_numarr(int ***arr, char *file_name)
{
	int	a;
	int	b;
	int	lsize;
	int	csize;

	a = 1;
	lsize = ft_line_size(file_name);
	csize = ft_column_size(file_name);
	while (a < lsize - 1)
	{
		b = 1;
		while (b < csize - 1)
		{
			if ((*arr)[a][b - 1] != 0 && (*arr)[a - 1][b]
				!= 0 && (*arr)[a - 1][b - 1] != 0 && (*arr)[a][b] != 0)
			{
				(*arr)[a][b] = ft_get_min((*arr)[a][b - 1],
						(*arr)[a - 1][b], (*arr)[a - 1][b - 1]) + 1;
			}
			b++;
		}
		a++;
	}
}
