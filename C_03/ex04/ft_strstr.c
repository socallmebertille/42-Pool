/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 11:55:54 by saberton          #+#    #+#             */
/*   Updated: 2024/03/25 09:15:57 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i - j]);
			j++;
			i++;
		}
		i = i - j;
		j = 0;
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*str = "Hola ! Hola_que tal ?";
	char	to_find[] = "Hola_";

	printf("%s", ft_strstr(str, to_find));
	return (0);
}*/
