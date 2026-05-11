/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:24:33 by saberton          #+#    #+#             */
/*   Updated: 2024/03/28 18:45:42 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (n > 0)
	{
		nb *= n;
		n --;
	}
	return (nb);
}

/*int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
	return (0);
}*/
