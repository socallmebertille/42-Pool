/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 08:42:45 by saberton          #+#    #+#             */
/*   Updated: 2024/03/20 08:48:15 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= ' ' && str[i] <= '~')))
			return (0);
		i++;
	}
	return (1);
}

/*int     main(void)
{
        char    *str = "~hola!";
        char    res;

        res = ft_str_is_printable(str) + '0';
        write(1, &res, 1);
        return (0);
}*/
