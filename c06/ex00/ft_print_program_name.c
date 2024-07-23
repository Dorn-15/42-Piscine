/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 16:06:27 by xxxxxx            #+#    #+#             */
/*   Updated: 2024/07/07 16:11:34 by xxxxxx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write (1, &str[i], 1);
	write (1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac >= 1)
		ft_putstr(av[0]);
	return (0);
}
