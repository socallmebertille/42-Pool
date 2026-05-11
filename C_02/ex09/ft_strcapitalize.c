/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 09:40:31 by saberton          #+#    #+#             */
/*   Updated: 2024/03/21 08:04:30 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_str_min(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	str = ft_str_min(str);
	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= '0' && str[i] <= '9')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = " salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	int	i;
	char	*res = ft_strcapitalize(str);

	i = 0;
	while (res[i] != '\0')
	{
		write(1, &res[i], 1);
		i++;
	}
}*/
