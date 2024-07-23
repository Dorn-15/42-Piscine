/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:47:00 by xxxxxx            #+#    #+#             */
/*   Updated: 2024/07/11 12:46:06 by xxxxxx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcat(char *join, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	pos;

	i = -1;
	pos = 0;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
		{
			join[pos] = strs[i][j];
			pos++;
		}
		j = -1;
		if (i < size - 1)
		{
			while (sep[++j])
			{
				join[pos] = sep[j];
				pos++;
			}
		}
	}
	join[pos] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		leng;
	char	*join;

	i = -1;
	leng = (size - 1) * ft_strlen(sep);
	if (size == 0)
	{
		join = malloc(1 * sizeof(char));
		if (!join)
			return (NULL);
		join[0] = '\0';
		return (join);
	}
	while (++i < size)
		leng += ft_strlen(strs[i]);
	join = malloc((leng + 1) * sizeof(char));
	if (!join)
		return (NULL);
	ft_strcat(join, size, strs, sep);
	return (join);
}
