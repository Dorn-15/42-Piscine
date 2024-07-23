/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:03:31 by xxxxxx            #+#    #+#             */
/*   Updated: 2024/07/18 11:04:37 by xxxxxx           ###   ########.fr       */
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

char	ft_charcomp(char c, char *charset)
{
	int	i;

	i = 0;
	if (charset == NULL)
		return ('\0');
	while (c != charset[i] && charset[i])
			i++;
	return (charset[i]);
}

int	ft_wordcount(char *str, char *charset)
{
	int	i;
	int	words;

	words = 0;
	if (str[0] != ft_charcomp(str[0], charset))
			words++;
	i = 1;
	while (str[i])
	{
		if (str[i] != ft_charcomp(str[i], charset)
			&& str[i - 1] == ft_charcomp(str[i - 1], charset))
			words++;
		i++;
	}
	return (words);
}

void	ft_str_to_tab(char	**strs, char *str, char *charset)
{
	int	i;
	int	j;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		j = 0;
		while (str[i] == ft_charcomp(str[i], charset))
			i++;
		strs[words] = malloc((ft_strlen(str + i) + 1) * sizeof(char));
		if (!strs[words])
			return ;
		while (str[i] != ft_charcomp(str[i], charset))
		{
			strs[words][j] = str[i];
			j++;
			i++;
		}
		strs[words][j] = 0;
		words++;
	}
}

char	**ft_split(char *str, char *charset)
{
	int		words;
	char	**strs;

	words = 0;
	if (str != NULL && ft_strlen(str) != 0)
		words = ft_wordcount(str, charset);
	strs = malloc((words + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	if (str != NULL && ft_strlen(str) != 0)
		ft_str_to_tab(strs, str, charset);
	strs[words] = 0;
	return (strs);
}
