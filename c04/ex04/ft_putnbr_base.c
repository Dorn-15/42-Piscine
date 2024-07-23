/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:06:29 by xxxxxx            #+#    #+#             */
/*   Updated: 2024/07/04 17:31:12 by xxxxxx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char txt)
{
	write(1, &txt, 1);
}

int	ft_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_error(char *base, int len)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || len == 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= ' ' || \
		base[i] > '~')
			return (0);
		j = i + 1;
		while (j <= len)
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nbl;
	long	len;
	long	error;

	len = ft_len(base);
	error = ft_error(base, len);
	if (error != 0)
	{
		nbl = (long)nbr;
		if (nbl < 0)
		{
			ft_putchar('-');
			nbl *= -1;
		}
		if (nbl < len)
			ft_putchar(base[nbl]);
		else
		{
			ft_putnbr_base(nbl / len, base);
			ft_putchar(base[nbl % len]);
		}
	}
}
