/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 04:21:30 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/18 07:12:13 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122)))
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
	int	a;

	a = ft_str_is_alpha("");
	if (a)
		printf("alphabetic");
	else
		printf("non-alphabetic");
		
}*/
