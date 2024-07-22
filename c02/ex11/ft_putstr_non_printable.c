/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:48:21 by xxxxxx            #+#    #+#             */
/*   Updated: 2024/07/09 16:25:14 by xxxxxx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char txt)
{
	write(1, &txt, 1);
}

void	ft_putchar_base(char txt)
{
	char *base;

	base = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &base[txt / 16], 1);
	write(1, &base[txt % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] > '~')
			ft_putchar_base(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
