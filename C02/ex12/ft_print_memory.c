/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:50:44 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/02/15 10:50:38 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	convert_hex(int nb, int op)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	if (op == 1)
		write(1, &hex_digits[nb % 16], 1);
	else if (op == 2)
	{
		write(1, &hex_digits[nb / 16], 1);
		write(1, &hex_digits[nb % 16], 1);
	}
	else if (op == 0)
		return (nb / 16);
	return (0);
}

void	write_address(void *ptr)
{
	unsigned long	addr;
	int				i;

	addr = (unsigned long)ptr;
	i = 15;
	while (i >= 0)
	{
		convert_hex(addr, 1);
		addr /= 16;
		i--;
	}
	write(1, ": ", 2);
}

void	print_hex_line(unsigned char *byte_ptr, size_t i, size_t size)
{
	size_t	j;

	j = 0;
	while (j < 16)
	{
		if (i + j < size)
			convert_hex(byte_ptr[i + j], 2);
		else
			write(1, "  ", 2);
		if (j % 2)
			write(1, " ", 1);
		j++;
	}
}

void	print_scii_line(unsigned char *byte_ptr, size_t i, size_t size)
{
	size_t	j;

	j = 0;
	while (j < 16 && (i + j) < size)
	{
		if (byte_ptr[i + j] >= 32 && byte_ptr[i + j] <= 126)
			write(1, &byte_ptr[i + j], 1);
		else
			write(1, ".", 1);
		j++;
	}
}

void	ft_print_memory(void *ptr, size_t size)
{
	unsigned char	*byte_ptr;
	size_t			i;

	byte_ptr = (unsigned char *)ptr;
	i = 0;
	while (i < size)
	{
		write_address(&byte_ptr[i]);
		print_hex_line(byte_ptr, i, size);
		print_scii_line(byte_ptr, i, size);
		write(1, "\n", 1);
		i += 16;
	}
}

// #include <stdio.h>

// int main(void)
// {
//     char data[] = "Bonjour les amiches\t\nc'est fou\tout ce qu'on peut "
//                   "faire avec\tprint_memory\nlol.lol\n";

//     ft_print_memory(data, sizeof(data));
//     return (0);
// }
