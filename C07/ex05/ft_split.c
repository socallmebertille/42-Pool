/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakerken <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:09:24 by sakerken          #+#    #+#             */
/*   Updated: 2024/04/04 10:02:07 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	get_len_tab(char *str, char *charset)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (!is_charset(str[i], charset))
		{
			words++;
			while (str[i] != '\0' && !is_charset(str[i], charset))
				i++;
		}
		if (str[i] == '\0')
			return (words);
		i++;
	}
	return (words);
}

char	*ft_strndup(char *src, int size)
{
	char	*dup;
	int		i;

	dup = malloc(sizeof(char) * (size + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (src[i] && i < size)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

void	ft_tab(char **tab, char *str, char *charset)
{
	int	i;
	int	word;
	int	k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		word = 0;
		if (!(is_charset(str[i], charset)))
		{
			while (str[i] != '\0' && !is_charset(str[i], charset))
			{
				word++;
				i++;
			}
			tab[k] = ft_strndup(str + i - word, word);
			k++;
		}
		else
			i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	int		words;
	char	**tab;

	words = get_len_tab(str, charset) + 1;
	tab = (char **)malloc(sizeof(char *) * (words));
	if (tab == NULL)
		return (NULL);
	tab[words - 1] = NULL;
	ft_tab(tab, str, charset);
	return (tab);
}

/*int	main(int ac, char **av)
{
	char **res;
	
	(void)ac;
	res = ft_split(av[1], av[2]);
	int	 i = 0;

	while (res[i] != NULL)
	{
		printf("%s\n", res[i]);
		i++;
	}
}*/
