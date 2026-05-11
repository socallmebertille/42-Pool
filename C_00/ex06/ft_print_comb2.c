/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:02:31 by saberton          #+#    #+#             */
/*   Updated: 2024/03/15 09:52:03 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	g_a;
int	g_b;
int	g_c;
int	g_d;

void	ft_putchar(int g_a, int g_b, int g_c, int g_d)
{
	if (g_a == '9' && g_b == '8' && g_c == '9' && g_d == '9')
	{
		write(1, &g_a, 1);
		write(1, &g_b, 1);
		write(1, " ", 1);
		write(1, &g_c, 1);
		write(1, &g_d, 1);
		write(1, "\n ", 1);
	}
	else
	{
		write(1, &g_a, 1);
		write(1, &g_b, 1);
		write(1, " ", 1);
		write(1, &g_c, 1);
		write(1, &g_d, 1);
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	g_a = '0';
	g_b = '0';
	while (g_a <= '9')
	{
		while (g_b <= '8')
		{
			g_c = g_a;
			while (g_c <= '9')
			{
				g_d = g_b + 1;
				while (g_d <= '9')
				{
					ft_putchar(g_a, g_b, g_c, g_d);
					g_d++;
				}
				g_c++;
			}
			g_b++;
		}
		g_b = '0';
		g_a++;
	}
}
