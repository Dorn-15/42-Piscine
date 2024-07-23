/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 12:59:13 by xxxxxx            #+#    #+#             */
/*   Updated: 2024/07/07 11:21:19 by xxxxxx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac;
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	fac = 1;
	i = 0;
	while (++i <= nb)
		fac *= i;
	return (fac);
}
