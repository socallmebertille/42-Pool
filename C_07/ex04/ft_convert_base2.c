/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 16:34:07 by saberton          #+#    #+#             */
/*   Updated: 2024/04/03 17:45:17 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_conf_base(char *base);
int		ft_conf_str(char *nbr, char *base, int i);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	ft_nbr(char *nbr, char *base, int i, int len)
{
	long	nb;
	int		j;

	nb = 0;
	j = 0;
	while (base[j])
	{
		if (nbr[i] == base[j])
		{
			nb *= len;
			nb += j;
			i++;
			j = -1;
		}
		j++;
	}
	return (nb);
}

int	ft_atoi_base(char *nbr, char *base_from)
{
	int		i;
	int		len;
	long	sign;
	long	nb;

	i = 0;
	while (nbr[i] == ' ' || (nbr[i] >= '\t' && nbr[i] <= '\r'))
		i++;
	sign = 1;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			sign *= (-1);
		i++;
	}
	len = ft_conf_base(base_from);
	if (len == 0 || ft_conf_str(nbr, base_from, i) == 0)
		return (0);
	nb = ft_nbr(nbr, base_from, i, len);
	return (sign * nb);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_itoa_base(long nb, char *base_to, char *str, int i)
{
	int	len;

	len = ft_conf_base(base_to);
	if (nb < 0)
	{
		str[i] = '-';
		i++;
		nb = -nb;
	}
	if (nb < len)
	{
		str[i] = base_to[nb];
		str[i + 1] = '\0';
	}
	else
	{
		ft_itoa_base(nb / len, base_to, str, i);
		ft_itoa_base(nb % len, base_to, str, ft_strlen(str));
	}
}
