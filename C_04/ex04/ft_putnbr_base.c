/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 14:26:48 by saberton          #+#    #+#             */
/*   Updated: 2024/03/27 10:55:07 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_conf_base(char *base)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| (base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (0);
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j])
				count++;
			j++;
		}
		i++;
	}
	if (count != i)
		return (0);
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			len;
	long int	nb;

	nb = (long int)nbr;
	len = ft_conf_base(base);
	if (len == 0)
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= len)
		ft_putnbr_base(nb / len, base);
	ft_putchar(base[nb % len]);
}

/*int	main(void)
{
	write(1, "-1969bbd", 8);
	ft_putnbr_base(-26647485, "0123456789ABCDEF");
	write(1, "\n42:", 4);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");
	return (0);
}*/
