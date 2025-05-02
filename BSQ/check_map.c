/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:14:20 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/30 22:28:30 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQLIB.h"

int	ft_check_clmn_numbers(char **buff)
{
	int	fline_column_size;
	int	i;
	int	j;

	i = 0;
	j = 0;
	fline_column_size = 0;
	while (buff[0][fline_column_size])
		fline_column_size++;
	while (buff[i])
	{
		j = 0;
		while (buff[i][j])
		{
			j++;
		}
		if (j != fline_column_size)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_verify_fline(char *file_name)
{
	if (ft_get_fill(file_name) == ft_get_barrier(file_name))
		return (0);
	if (ft_get_fill(file_name) == ft_get_empty(file_name))
		return (0);
	if (ft_get_barrier(file_name) == ft_get_empty(file_name))
		return (0);
	return (1);
}

int	ft_verify_missing(char *file_name)
{
	int	a;

	a = 0;
	while ((ft_get_fline(file_name))[a])
		a++;
	if (a < 4)
		return (0);
	return (1);
}

int	ft_verify_line_size(char *file_name)
{
	if (ft_get_line_size(ft_get_fline(file_name))
		!= ft_line_size(file_name) - 1)
		return (0);
	return (1);
}

int	ft_check_map(char *file_name)
{
	if (ft_check_clmn_numbers(ft_read_file(file_name)) != 1
		|| ft_check_chars(ft_read_file(file_name), file_name) != 1
		|| ft_verify_line_size(file_name) != 1)
	{
		ft_putstr("map error\n");
		return (0);
	}
	if (ft_verify_fline(file_name) != 1
		|| ft_is_printable(ft_get_fline(file_name)) != 1)
	{
		ft_putstr("map error\n");
		return (0);
	}
	if (ft_verify_missing(file_name) != 1)
	{
		ft_putstr("map error\n");
		return (0);
	}
	return (1);
}
