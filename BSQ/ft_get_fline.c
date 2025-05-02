/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_fline.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:23:43 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/30 22:46:39 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQLIB.h"

char	*ft_get_fline(char *file_name)
{
	int		i;
	int		fd;
	char	buff;
	char	*fline;

	fline = malloc(1024 * sizeof(char));
	fd = open(file_name, O_RDONLY);
	i = 0;
	while (read(fd, &buff, 1) && buff != '\n')
	{
		fline[i] = buff;
		i++;
	}
	close(fd);
	return (fline);
}

char	ft_get_fill(char *fline)
{
	int	a;

	a = 0;
	while (fline[a])
		a++;
	return (fline[a - 1]);
}

char	ft_get_barrier(char *fline)
{
	int	a;

	a = 0;
	while (fline[a])
		a++;
	return (fline[a - 2]);
}

char	ft_get_empty(char *fline)
{
	int	a;

	a = 0;
	while (fline[a])
		a++;
	return (fline[a - 3]);
}

int	ft_get_line_size(char *fline)
{
	int		a;
	int		b;
	char	*lsize;

	lsize = malloc(1024 * sizeof(char));
	a = 0;
	b = 0;
	while (fline[a])
		a++;
	while (b < a - 3)
	{
		lsize[b] = fline[b];
		b++;
	}
	return (ft_atoi(lsize));
}
