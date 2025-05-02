/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:04:02 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/05/01 21:00:41 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	a;
	int	b;
	int	*arr;

	a = max - min;
	if (max <= min)
		return (NULL);
	arr = (int *)malloc(a * sizeof(int));
	if (arr == NULL)
		return (NULL);
	b = 0;
	while (b < a)
	{
		arr[b] = min;
		b++;
		min++;
	}
	return (arr);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	int	*arr = ft_range(1, 7);
	for (int i = 0; i < 6; i++)
	{
		printf("%d", arr[i]);
	}
}
