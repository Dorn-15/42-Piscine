/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 21:00:32 by xxxxxx            #+#    #+#             */
/*   Updated: 2024/07/04 13:24:12 by xxxxxx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (to_find[j] == '\0')
			return (str + i - j);
		else if (str[i] == to_find[j])
			j++;
		else
			j = 0;
		i++;
	}
	if (to_find[j] == '\0')
		return (str + i - j);
	return (0);
}
