/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 17:28:59 by xxxxxx            #+#    #+#             */
/*   Updated: 2024/07/07 18:07:02 by xxxxxx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
	write(1, "\n", 1);
}

void	ft_print(int ac, char **av)
{
	int	i;

	i = 0;
	while (++i < ac)
		ft_putstr(av[i]);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_params(int ac, char **av)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (++i < ac)
	{
		j = 0;
		while (++j < ac - i)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				temp = av[j];
				av[j] = av[j + 1];
				av[j + 1] = temp;
			}
		}
	}
	ft_print(ac, av);
}

int	main(int ac, char **av)
{
	if (ac > 1)
		ft_sort_params(ac, av);
	return (0);
}
