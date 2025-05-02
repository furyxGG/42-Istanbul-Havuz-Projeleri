/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 03:51:12 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/05/01 20:54:45 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_mallocsize(char **strs, char *sep, int size)
{
	int	total_size_strs;
	int	size_sep;
	int	i;
	int	j;

	total_size_strs = 0;
	size_sep = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		while (strs[i][j])
		{
			j++;
			total_size_strs++;
		}
		j = 0;
		i++;
	}
	while (sep[size_sep])
		size_sep++;
	return ((size - 1) * size_sep + total_size_strs + 1);
}

void	ft_printsep(int *j, int *k, char *lng_str, char *sep)
{
	while (sep[*j])
	{
		lng_str[*k] = sep[*j];
		(*j)++;
		(*k)++;
	}
	(*j) = 0;
}

void	ft_fillstr(int size, char **strs, char *sep, char *lng_str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		while (strs[i][j])
		{
			lng_str[k] = strs[i][j];
			j++;
			k++;
		}
		j = 0;
		if (i != (size - 1))
			ft_printsep(&j, &k, lng_str, sep);
		i++;
	}
	lng_str[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*lng_str;

	if (size == 0)
	{
		lng_str = (char *)malloc(1);
		lng_str[0] = '\0';
		return (lng_str);
	}
	lng_str = (char *)malloc(ft_mallocsize(strs, sep, size));
	ft_fillstr(size, strs, sep, lng_str);
	return (lng_str);
}
