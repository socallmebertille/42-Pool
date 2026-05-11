/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:46:30 by saberton          #+#    #+#             */
/*   Updated: 2024/03/18 12:53:10 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	temp;
	int	end;

	start = 0;
	end = size - 1;
	while (start <= end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
