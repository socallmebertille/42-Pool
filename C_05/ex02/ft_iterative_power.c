/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:39:39 by saberton          #+#    #+#             */
/*   Updated: 2024/03/26 14:58:42 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 1)
	{
		res *= nb;
		power--;
	}
	return (res);
}

/*int	main(void)
{
	printf("%d", ft_iterative_power(4, 3));
	return (0);
}*/
