/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:48:31 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/04/27 17:05:50 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] == s2[a] && s1[a])
		a++;
	return (s1[a] - s2[a]);
}

char	**sort_arrays(int argc, char **argv)
{
	int		a;
	char	*temp;

	a = 1;
	while (a < argc)
	{
		while (a < argc - 1)
		{
			if (ft_strcmp(argv[a], argv[a + 1]) > 0)
			{
				temp = argv[a];
				argv[a] = argv[a + 1];
				argv[a + 1] = temp;
			}
			a++;
		}
		a = 1;
		argc--;
	}
	return (argv);
}

void	printstr(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		write(1, &str[a], 1);
		a++;
	}
}

int	main(int argc, char **argv)
{
	int		a;
	char	**params;

	if (argc == 1)
		return (0);
	params = sort_arrays(argc, argv);
	a = 1;
	while (argv[a])
	{
		printstr(argv[a]);
		if (argv[a])
			write(1, "\n", 1);
		a++;
	}
}
