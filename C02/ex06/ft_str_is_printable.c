/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 05:37:14 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/18 05:44:02 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char	a[] = "   ";

	if (ft_str_is_printable(a))
		printf("printable");
	else
		printf("non-printable");
}*/
