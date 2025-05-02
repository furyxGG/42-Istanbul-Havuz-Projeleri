/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 21:45:22 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/30 23:34:39 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQLIB.h"

void	ft_read_stdin(void)
{
	int		bytes_read;
	int		fd;
	char	buffer[4096];

	fd = open("output", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd < 0)
		return ;
	bytes_read = read(0, buffer, 1);
	while (bytes_read > 0)
	{
		write(fd, buffer, 1);
		bytes_read = read(0, buffer, 1);
	}
	close(fd);
}
