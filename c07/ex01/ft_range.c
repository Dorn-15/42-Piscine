/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:51:36 by xxxxxx            #+#    #+#             */
/*   Updated: 2024/07/11 12:31:00 by xxxxxx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*tab;

	if (min >= max)
		return (NULL);
	i = max - min;
	j = -1;
	tab = malloc(i * sizeof(int));
	if (!tab)
		return (NULL);
	while (++j < i)
		tab[j] = min + j;
	return (tab);
}
