/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 07:51:47 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/15 12:54:09 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(unsigned char c)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	write(1, &hex_digits[c / 16], 1);
	write(1, &hex_digits[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			write(1, str, 1);
		else
		{
			write(1, "\\", 1);
			print_hex((unsigned char)*str);
		}
		str++;
	}
}
// #include <stdio.h>

// int	main(void)
// {
// 	ft_putstr_non_printable("Coucou\ntu vas bien ?");
// 	write(1, "\n", 1);
// 	ft_putstr_non_printable("Hello\x01\x02\x7F!");
// 	write(1, "\n", 1);
// 	return (0);
// }
