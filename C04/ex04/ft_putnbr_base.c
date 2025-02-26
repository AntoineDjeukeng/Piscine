/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 20:26:24 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/18 22:43:25 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_check_base(char *base)
{
	int	j;
	int	len;
	int	i;

	len = ft_strlen(base);
	if (len < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	if (!ft_check_base(base))
		return ;
	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr == -2147483648)
		{
			ft_putnbr_base(-(nbr / base_len), base);
			ft_putchar(base[-(nbr % base_len)]);
			return ;
		}
		nbr = -nbr;
	}
	if (nbr >= base_len)
		ft_putnbr_base(nbr / base_len, base);
	ft_putchar(base[nbr % base_len]);
}

// Testing the function
// #include <stdio.h>
// int main()
// {
//     ft_putnbr_base(255, "0123456789ABCDEF");
//     write(1, "\n", 1);
//     ft_putnbr_base(10, "01");
//     write(1, "\n", 1);
//     ft_putnbr_base(83, "poneyvif");
//     write(1, "\n", 1);
//     ft_putnbr_base(-42, "0123456789");
//     write(1, "\n", 1);
//     ft_putnbr_base(42, "ccc");
//     write(1, "\n", 1);
//     ft_putnbr_base(42, "+01234");
//     return 0;
// }
