/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:06:35 by saberton          #+#    #+#             */
/*   Updated: 2024/04/02 23:56:52 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*dup;

	i = ft_strlen(src);
	j = 0;
	dup = (char *)malloc(sizeof(char) * (i + 1));
	while (src[j])
	{
		dup[j] = src[j];
		j++;
	}
	dup[j] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab;

	i = 0;
	tab = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}

/*#include <stdio.h>

int	main(int ac, char **av)
{
	struct s_stock_str	*tab;
	int	i;

	tab = ft_strs_to_tab(ac, av);
	if (tab == NULL)
		return (1);
	i = 1;
	while (av[i] != NULL)
	{
		printf("%d %s %s\n", tab[i].size, tab[i].str, tab[i].copy);
		i++;
	}
	free(tab);
	return (0);
}*/
