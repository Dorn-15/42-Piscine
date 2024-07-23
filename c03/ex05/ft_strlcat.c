/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 21:16:33 by xxxxxx            #+#    #+#             */
/*   Updated: 2024/07/04 13:28:17 by xxxxxx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_len_str(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_s;
	unsigned int	len_d;

	i = 0;
	len_s = ft_len_str(src);
	len_d = ft_len_str(dest);
	if (size == 0 || size <= len_d)
		return (len_s + size);
	while (src[i] && i + len_d < size - 1)
	{
		dest[len_d + i] = src[i];
		i++;
	}
	dest[len_d + i] = '\0';
	return (len_d + len_s);
}
