/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 20:20:03 by saberton          #+#    #+#             */
/*   Updated: 2024/03/20 08:35:09 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str = "hola";
	char	res;

	res = ft_str_is_lowercase(str) + '0';
	write(1, &res, 1);
	return (0);
}*/
