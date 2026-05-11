/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:36:16 by saberton          #+#    #+#             */
/*   Updated: 2024/04/04 08:34:13 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (0);
	range = malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}

/*int	main(void)
{
	int	*tab;

	tab = ft_range(0, 8);
	if (tab == 0)
		return (0);
	printf("%d, %d, %d \n", tab[0], tab[1], tab[2]);
	return (0);
}*/
