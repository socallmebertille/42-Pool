/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:42:32 by saberton          #+#    #+#             */
/*   Updated: 2024/03/28 10:56:27 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index == 0 || index == 1)
		return (index);
	else if (index < 0)
		return (-1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*int	main(void)
{
	printf("%d", ft_fibonacci(5));
	return (0);
}*/
