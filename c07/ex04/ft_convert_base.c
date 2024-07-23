/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxx <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:23:41 by xxxxxx            #+#    #+#             */
/*   Updated: 2024/07/10 16:45:07 by xxxxxx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_error(char *base);
int	ft_init(char *str, int *i);
int	ft_base_nbr(char cara, char *base);
int	ft_strlen(char *base);

// converti un tableau en int
int	ft_atoi_base(char *str, char *base, int base_len)
{
	int	i;
	int	nb;
	int	base_nb;
	int	signe;

	i = 0;
	nb = 0;
	signe = ft_init(str, &i);
	base_nb = ft_base_nbr(str[i], base);
	while (base_nb >= 0)
	{
		nb = (nb * base_len) + base_nb;
		i++;
		base_nb = ft_base_nbr(str[i], base);
	}
	nb *= signe;
	return (nb);
}

// transforme nbr en autre base et l'integre dans nbr_base_to 
void	ft_putnbr_base(int nbr, char *base, char *nbr_base_to, int *i)
{
	long	nbl;
	int		base_len;

	base_len = ft_strlen(base);
	if (base_len >= 2)
	{
		nbl = (long)nbr;
		if (nbl < 0)
		{
			nbr_base_to[0] = '-';
			(*i)++;
			nbl *= -1;
		}
		if (nbl < base_len)
		{
			nbr_base_to[*i] = base[nbl];
			(*i)++;
		}
		else
		{
			ft_putnbr_base(nbl / base_len, base, nbr_base_to, i);
			ft_putnbr_base(nbl % base_len, base, nbr_base_to, i);
		}
	}
}

//verifie si les bases sont correcte et appeles les fonctions
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{	
	int		nb;
	int		i;
	char	*nbr_base_to;
	int		base_from_len;
	int		base_to_len;

	i = 0;
	base_from_len = ft_error(base_from);
	base_to_len = ft_error(base_to);
	if (base_from_len <= 1 || base_to_len <= 1)
		return (NULL);
	nb = ft_atoi_base(nbr, base_from, base_from_len);
	nbr_base_to = malloc(34 * sizeof(char));
	if (!nbr_base_to)
		return (NULL);
	ft_putnbr_base(nb, base_to, nbr_base_to, &i);
	nbr_base_to[i] = '\0';
	return (nbr_base_to);
}
