/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 18:28:05 by xxxxxx            #+#    #+#             */
/*   Updated: 2024/06/27 13:54:26 by xxxxxx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char r)
{
	write(1, &r, 1);
}

void	ft_ascii(int n)
{
	ft_print(n / 10 + '0');
	ft_print(n % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_ascii(a);
			ft_print(' ');
			ft_ascii(b);
			if (a != 98)
			{
				ft_print(',');
				ft_print(' ');
			}
			b++;
		}
		a++;
	}
}
