/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:19:53 by saberton          #+#    #+#             */
/*   Updated: 2024/03/30 11:31:58 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <limits.h>

int	ft_is_prime(int nb)
{
	long	i;

	if (nb <= 1)
		return (0);
	if (nb % 2 == 0 && nb != 2)
		return (0);
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d", ft_is_prime(8));
	return (0);
}*/
