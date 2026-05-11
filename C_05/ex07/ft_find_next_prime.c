/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:42:03 by saberton          #+#    #+#             */
/*   Updated: 2024/03/30 11:32:43 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <limits.h>

int	ft_find_next_prime(int nb)
{
	long	i;

	if (nb <= 1)
		return (ft_find_next_prime(nb + 1));
	if (nb % 2 == 0 && nb != 2)
		return (ft_find_next_prime(nb + 1));
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (ft_find_next_prime(nb + 1));
		i++;
	}
	return (nb);
}

/*int	main(void)
{
	printf("%d", ft_find_next_prime(-9));
	return (0);
}*/
