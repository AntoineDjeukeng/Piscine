/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:08:48 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/26 18:38:16 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	dup = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*array;
	int					i;

	array = (struct s_stock_str *)malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!array)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		if (!array[i].copy)
		{
			while (i > 0)
				free(array[--i].copy);
			free(array);
			return (NULL);
		}
		i++;
	}
	array[i].str = NULL;
	return (array);
}

// void	ft_putstr(char *str)
// {
// 	while (*str)
// 		write(1, str++, 1);
// }

// void	ft_putnbr(int nb)
// {
// 	char	c;
// 	long	n;

// 	n = nb;
// 	if (n >= 10)
// 	{
// 		ft_putnbr(n / 10);
// 	}
// 	c = (n % 10) + '0';
// 	write(1, &c, 1);
// }
// void	ft_show_tab(struct s_stock_str *arr)
// {
// 	int	i;

// 	i = 0;
// 	while (arr[i].str)
// 	{
// 		ft_putstr(arr[i].str);
// 		write(1, "\n", 1);
// 		ft_putnbr(arr[i].size);
// 		write(1, "\n", 1);
// 		ft_putstr(arr[i].str);
// 		write(1, "\n", 1);
// 		i++;
// 	}
// }

// int	main(int argc, char **argv)
// {
// 	struct s_stock_str	*result;
// 	int					i;

// 	result = ft_strs_to_tab(argc - 1, argv + 1);
// 	if (!result)
// 	{
// 		printf("Memory allocation failed!\n");
// 		return (1);
// 	}
// 	ft_show_tab(result);
// 	// Free allocated memory
// 	i = -1;
// 	while (result[i].str)
// 		free(result[i++].copy);
// 	free(result);
// 	return (0);
// }
