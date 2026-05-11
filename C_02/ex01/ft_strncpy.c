/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:04:46 by saberton          #+#    #+#             */
/*   Updated: 2024/03/19 12:04:54 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
        char    *src = "Hola que tal ?";
        char    dest[14];

        write(1, src, 14);
	write(1, "\n", 1);
        ft_strncpy(dest, src, 20);
        write(1, dest, 20);
}*/
