/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:33:10 by xxxxxx            #+#    #+#             */
/*   Updated: 2024/07/07 14:34:09 by xxxxxx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	min;
	long	max;
	long	carre;
	long	result;

	if (nb <= 0)
		return (0);
	min = 0;
	max = nb;
	while (min <= max)
	{
		carre = (min + max) / 2;
		result = carre * carre;
		if (result == nb)
			return (carre);
		else if (result < nb)
			min = carre + 1;
		else
			max = carre - 1;
	}
	if (result == nb)
		return (carre);
	return (0);
}
