/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 20:45:35 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/19 21:49:34 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int	*strToArray(char *c)
{
	int	*arr[16];
	int	a;

	a = 0;
	while (c[a] != '\0')
	{
		arr[a] = c[a] - '0';
		a++;
	}
	return (c);
}

int	main(void)
{
	printf("%s", trToArray('123');
}
