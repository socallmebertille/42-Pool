/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:59:41 by saberton          #+#    #+#             */
/*   Updated: 2024/03/26 16:12:41 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}

/*int	main(void)
{
	printf("%d", ft_recursive_power(4, 4));
	return (0);
}*/
