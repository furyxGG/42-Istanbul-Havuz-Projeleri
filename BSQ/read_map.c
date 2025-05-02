/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 12:51:28 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/30 23:09:26 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQLIB.h"

int	ft_size_file(char *file_name)
{
	char	buff;
	int		size;
	int		fd;

	size = 0;
	fd = open(file_name, O_RDONLY);
	while (read(fd, &buff, 1))
		size++;
	close(fd);
	return (size);
}

int	ft_line_size(char *file_name)
{
	char	buff;
	int		lsize;
	int		fd;

	lsize = 0;
	fd = open(file_name, O_RDONLY);
	while (read(fd, &buff, 1))
	{
		if (buff == '\n')
			lsize++;
	}
	close(fd);
	return (lsize);
}

int	ft_column_size(char *file_name)
{
	char	buff;
	int		bsize;
	int		fd;
	int		flsize;
	int		check;

	check = 0;
	flsize = 0;
	fd = open(file_name, O_RDONLY);
	while (read(fd, &buff, 1) && check == 0)
	{
		flsize++;
		if (buff == '\n')
		{
			check = 1;
		}
	}
	bsize = ft_size_file(file_name);
	close(fd);
	return ((bsize - flsize) / (ft_line_size(file_name) - 1));
}

void	ft_next_line(int fd)
{
	char	buff;

	while (read(fd, &buff, 1))
	{
		if (buff == '\n')
			return ;
	}
}

char	**ft_read_file(char *file_name)
{
	char	**buff;
	int		fd;
	int		a;
	int		b;

	a = 0;
	b = 0;
	fd = open(file_name, O_RDONLY);
	buff = malloc(ft_line_size(file_name) * sizeof(char *));
	ft_next_line(fd);
	while (a < ft_line_size(file_name) - 1)
	{
		b = 0;
		buff[a] = malloc(sizeof(char) * (ft_column_size(file_name) + 1));
		while (read(fd, &buff[a][b], 1) && buff[a][b]
			!= '\n' && b < ft_column_size(file_name))
			b++;
		buff[a][b] = '\n';
		buff[a][b + 1] = '\0';
		a++;
	}
	buff[a] = '\0';
	close(fd);
	return (buff);
}
