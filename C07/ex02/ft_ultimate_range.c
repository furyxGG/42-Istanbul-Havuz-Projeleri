/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 01:55:06 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/05/01 19:49:11 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	a;
	int	ra;
	int	*res_arr;

	a = 0;
	ra = max - min;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	res_arr = malloc(ra * sizeof(int));
	if (!res_arr)
	{
		*range = NULL;
		return (-1);
	}
	while (a < ra)
	{
		res_arr[a] = min;
		a++;
		min++;
	}
	*range = res_arr;
	return (a);
}

int	main()
{
	int	*arr;
	for(int i = 0; i < ft_ultimate_range(&arr, 0, 5); i++)
		printf("%d ", arr[i]);
}
