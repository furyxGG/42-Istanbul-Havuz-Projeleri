/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_chars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 20:52:15 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/30 23:09:05 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQLIB.h"

int	ft_check_chars(char **buff, char *file_name)
{
	int		a;
	int		b;
	char	barr;
	char	empt;

	a = 0;
	b = 0;
	empt = ft_get_empty(ft_get_fline(file_name));
	barr = ft_get_barrier(ft_get_fline(file_name));
	while (buff[a])
	{
		while (buff[a][b])
		{
			if ((buff[a][b] != empt) && (buff[a][b] != barr)
					&& (buff[a][b] != '\n'))
			{
				return (0);
			}
			b++;
		}
		b = 0;
		a++;
	}
	return (1);
}

int	ft_is_printable(char *fline)
{
	int	a;

	a = 0;
	while (fline[a])
	{
		if (!(fline[a] >= 32 && fline[a] <= 126))
			return (0);
		a++;
	}
	return (1);
}
