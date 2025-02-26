/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:50:44 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/02/13 06:44:59 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>
// int main(void)
// {
// 	int r;
// 	r=ft_str_is_uppercase("abcdefghijkl");
// 	printf("The destination string is: %d\n", r);
// 	r=ft_str_is_uppercase("abcghij[`aBCZ");
// 	printf("The destination string is: %d\n", r);
// 	r=ft_str_is_uppercase("SDDDDWERR");
// 	printf("The destination string is: %d\n", r);

// 	return (0);
// }
