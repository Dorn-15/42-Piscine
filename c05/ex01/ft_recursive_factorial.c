/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 12:59:13 by xxxxxx            #+#    #+#             */
/*   Updated: 2024/07/07 11:22:55 by xxxxxx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fac;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		fac = nb * ft_recursive_factorial(nb - 1);
	return (fac);
}
