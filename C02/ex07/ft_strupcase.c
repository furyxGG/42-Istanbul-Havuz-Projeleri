/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 05:53:52 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/22 00:31:35 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			str[a] = str[a] - 32;
		a++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	a[] = "";
	ft_strupcase(a);
	printf("%s", a);
}*/
