/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 12:59:13 by xxxxxx            #+#    #+#             */
/*   Updated: 2024/07/06 19:33:51 by xxxxxx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	pow;
	int	i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 0;
	pow = nb;
	while (++i < power)
		nb *= pow;
	return (nb);
}
