/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 08:36:53 by saberton          #+#    #+#             */
/*   Updated: 2024/03/20 08:41:15 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

/*int     main(void)
{
        char    *str = "HOLA";
        char    res;

        res = ft_str_is_uppercase(str) + '0';
        write(1, &res, 1);
        return (0);
}*/
