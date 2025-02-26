/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 08:30:41 by antoine           #+#    #+#             */
/*   Updated: 2025/02/10 09:12:18 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(char c)
{
	write(1, &c, 1);
}

void	loop(int n, int b, int postion, int digits[])
{
	int	i;
	int	j;

	if (postion == n)
	{
		i = 0;
		while (i < n)
		{
			ft_putnbr(digits[i] + '0');
			i++;
		}
		if (digits[0] != 10 - n)
			write(1, ", ", 2);
		return ;
	}
	j = b;
	while (j <= 10 - (n - postion))
	{
		digits[postion] = j;
		loop(n, j + 1, postion + 1, digits);
		j++;
	}
}

void	ft_print_combn(int n)
{
	int	digits[10];

	if (n > 0 && n < 10)
		loop(n, 0, 0, digits);
}

// int	main(void)
// {
// 	ft_print_combn(4);
// }
