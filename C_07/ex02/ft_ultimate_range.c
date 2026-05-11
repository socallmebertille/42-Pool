/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 18:49:46 by saberton          #+#    #+#             */
/*   Updated: 2024/04/04 08:40:39 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}

/*int	main(void)
{
	int	size;
	int	*tab;
	int	i;
	
	size = ft_ultimate_range(&tab, 0, 8);
	if (tab == NULL)
		return (-1);
	printf("%d \n", size);
	i = 0;
	while (size > 0)
	{
		printf("%d ", tab[i]);
		i++;
		size--;
	}
	free(tab);
	return (0);
}*/
