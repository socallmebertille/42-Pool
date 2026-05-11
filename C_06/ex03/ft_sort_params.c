/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:02:03 by saberton          #+#    #+#             */
/*   Updated: 2024/03/27 19:05:14 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_strcmp(char *a, char *b)
{
	int	i;

	i = 0;
	while (a[i] != '\0' || b[i] != '\0')
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}

void	ft_sort_params(int argc, char **argv)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	while (i < argc)
	{
		j = 0;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*int	main(int argc, char **argv)
{
	int	i;
	
	ft_sort_params(argc, argv);
	i = 0;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}*/
