/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 11:37:34 by saberton          #+#    #+#             */
/*   Updated: 2024/04/04 09:45:49 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	g_i;
int	g_j;
int	g_k;
int	g_l;

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_init_join(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*join;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	if (size == 0)
	{
		join = malloc(sizeof(char));
		join[0] = '\0';
		return (join);
	}
	join = malloc(sizeof(char) * (len + 1));
	if (join == NULL)
		return (NULL);
	return (join);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;

	join = ft_init_join(size, strs, sep);
	if (size == 0 || join == NULL)
		return (join);
	g_i = 0;
	g_k = 0;
	while (g_i < size)
	{
		g_j = 0;
		while (strs[g_i][g_j])
			join[g_k++] = strs[g_i][g_j++];
		if (g_i < size - 1)
		{
			g_l = 0;
			while (sep[g_l])
				join[g_k++] = sep[g_l++];
		}
		g_i++;
	}
	join[g_k] = '\0';
	return (join);
}

/*int	main(void)
{
	char	*strs[0];
	char	*sep;
	char	*tab;

	sep = "";
	strs[0] = "";
	strs[1] = "";
	strs[2] = "";
	strs[3] = "";
	tab = ft_strjoin(0, strs, sep);
	if (tab == NULL)
		return (0);
	printf("%s \n", tab);
	return (0);
}*/
