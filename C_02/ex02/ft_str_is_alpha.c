/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:36:18 by saberton          #+#    #+#             */
/*   Updated: 2024/03/19 20:03:20 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str = "Hola que tal ?";
	char	res;

	res = ft_str_is_alpha(str) + '0';
	write(1, &res, 1);
	return (0);
}*/
