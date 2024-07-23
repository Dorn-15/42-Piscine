/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:23:09 by xxxxxx            #+#    #+#             */
/*   Updated: 2024/07/09 18:35:14 by xxxxxx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= ' ' || \
		(base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_init(char *str, int *i)
{
	int	signe;

	signe = 1;
	while (str[*i] == ' ' || (str[*i] >= '\t' && str[*i] <= '\r'))
		*i += 1;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			signe *= -1;
		*i += 1;
	}
	return (signe);
}

int	ft_base_nbr(char str, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb])
	{
		if (str == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nb;
	int	base_len;
	int	base_nb;
	int	signe;

	i = 0;
	nb = 0;
	base_len = ft_error(base);
	if (base_len >= 2)
	{
		signe = ft_init(str, &i);
		base_nb = ft_base_nbr(str[i], base);
		while (base_nb >= 0)
		{
			nb = (nb * base_len) + base_nb;
			i++;
			base_nb = ft_base_nbr(str[i], base);
		}
		nb *= signe;
	}
	return (nb);
}
