/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 10:59:10 by saberton          #+#    #+#             */
/*   Updated: 2024/03/28 10:54:17 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <limits.h>

int	ft_sqrt(int nb)
{
	int	rac;

	rac = 1;
	while (rac <= INT_MAX)
	{
		if (nb <= 0)
			return (0);
		while (rac < nb / rac)
			rac++;
		if (rac * rac != nb)
			return (0);
		return (rac);
	}
	return (0);
}

/*int	main(void)
{
	printf("%d", ft_sqrt(25));
	return (0);
}*/
