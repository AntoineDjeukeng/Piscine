/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:50:44 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/02/13 07:13:11 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}
// #include <stdio.h>
// int main(void)
// {
// 	int r;
// 	r=ft_str_is_printable("abcdefghijkl");
// 	printf("The destination string is: %d\n", r);
// 	r=ft_str_is_printable("abcghij[`aBCZ");
// 	printf("The destination string is: %d\n", r);
// 	r=ft_str_is_printable("23ad\nsaffq");
// 	printf("The destination string is: %d\n", r);

// 	return (0);
// }
