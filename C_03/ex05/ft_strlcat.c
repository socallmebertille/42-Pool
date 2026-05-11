/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:01:42 by saberton          #+#    #+#             */
/*   Updated: 2024/03/25 15:05:59 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (size <= i)
		return (j + size);
	while (src[k] != '/0' && (i + k) < (size - 1))
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (i + j);
}

/*int	main(void)
{
	char	*src = "que tal ?";
	char	dest[] = "Holaaa ";

	printf("%u", ft_strlcat(dest, src, 16));
	return(0);
}*/
