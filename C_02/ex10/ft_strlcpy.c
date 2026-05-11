/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:21:27 by saberton          #+#    #+#             */
/*   Updated: 2024/03/20 17:58:14 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

unsigned int	ft_strlen(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(src);
	if (len != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		while (i < size - 1)
		{
			dest[i] = '\0';
			i++;
		}
	}
	if (size - 1 >= len)
		return (0);
	return (len);
}

/*int	main(void)
{
	char	*src = "Hola";
	char	dest[6];
	int	res;

	write(1, src, ft_strlen(src));
	write(1, "\n", 1);
	res = ft_strlcpy(dest, src, 6);
	printf("%d", res);
	write(1,"\n", 1);
	write(1, dest, 6);
	return (0);
}*/
