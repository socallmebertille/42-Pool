/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:01:44 by saberton          #+#    #+#             */
/*   Updated: 2024/03/18 09:39:40 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	before_a;
	int	before_b;

	before_a = *a;
	before_b = *b;
	*a = before_a / before_b;
	*b = before_a % before_b;
}
