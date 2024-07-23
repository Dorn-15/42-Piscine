/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 16:50:49 by xxxxxx            #+#    #+#             */
/*   Updated: 2024/07/07 16:54:16 by xxxxxx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[i])
		write(1, &str[i], 1);
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = ac;
	if (ac > 1)
	{
		while (--i > 0)
			ft_putstr(av[i]);
	}
	return (0);
}
