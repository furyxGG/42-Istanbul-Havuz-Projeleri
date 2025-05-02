/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 06:03:51 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/22 00:30:52 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	a;

	a = 0;
	if (str[a] != '\0' && str[a] <= 122 && str[a] >= 97)
		str[a] = str[a] - 32;
	a++;
	while (str[a] != '\0')
	{
		if (!(((str[a - 1]) <= 122 && str[a - 1] >= 97)
				|| (str[a - 1] <= 90 && str[a - 1] >= 65)
				|| (str[a - 1] <= 57 && str[a - 1] >= 48)))
		{
			if (str[a] <= 122 && str[a] >= 97)
				str[a] = str[a] - 32;
		}
		else if (str[a] >= 65 && str[a] <= 90)
			str[a] = str[a] + 32;
		a++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "12Salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(a);
	printf("%s", a);
}*/
