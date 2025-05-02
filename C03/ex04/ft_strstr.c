/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 05:14:41 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/27 09:31:35 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	if (*to_find == '\0')
		return (str);
	a = 0;
	while (str[a])
	{
		b = 0;
		while (to_find[b] == str[a + b] && to_find[b])
		{
			if (!to_find[b + 1])
				return (str + a);
			b++;
		}
		a++;
	}
	return (0);
}
