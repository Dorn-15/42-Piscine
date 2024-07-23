/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:23:41 by xxxxxx            #+#    #+#             */
/*   Updated: 2024/07/10 16:36:54 by xxxxxx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// verification erreur de la base
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

// retire les espaces, les + et les - de str, puis renvoie le signe
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

// donne la position d'une valeur presente dans la base
int	ft_base_nbr(char cara, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb])
	{
		if (cara == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}
