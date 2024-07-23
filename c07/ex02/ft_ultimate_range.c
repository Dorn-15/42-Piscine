/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:11:06 by xxxxxx            #+#    #+#             */
/*   Updated: 2024/07/11 12:32:36 by xxxxxx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	j = -1;
	*range = malloc(i * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (++j < i)
		(*range)[j] = min + j;
	return (i);
}
