/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:00:40 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/05/01 19:41:00 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		a;
	char	*cpy;

	a = 0;
	while (src[a])
		a++;
	cpy = (char *)malloc(a * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	a = 0;
	while (src[a])
	{
		cpy[a] = src[a];
		a++;
	}
	cpy[a] = '\0';
	return (cpy);
}

int	main()
{
	char	*as = "Selam naber cadı?";
	char	*ab = ft_strdup(as);

	printf("%s", ab);
}
