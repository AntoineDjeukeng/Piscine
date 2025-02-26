/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:09:29 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/26 18:38:09 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(int nb)
{
	char	c;
	long	n;

	n = nb;
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *arr)
{
	int	i;

	i = 0;
	while (arr[i].str)
	{
		ft_putstr(arr[i].str);
		write(1, "\n", 1);
		ft_putnbr(arr[i].size);
		write(1, "\n", 1);
		ft_putstr(arr[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
