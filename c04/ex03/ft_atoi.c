/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:14:47 by xxxxxx            #+#    #+#             */
/*   Updated: 2024/07/04 17:29:41 by xxxxxx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	calcule;

	i = 0;
	calcule = 0;
	signe = ft_init(str, &i);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		calcule *= 10;
		calcule += str[i] - '0';
		i++;
	}
	return (calcule * signe);
}
