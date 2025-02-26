/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:50:44 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/02/13 06:44:02 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>
// int main(void)
// {
// 	int r;
// 	r=ft_str_is_lowercase("abcdefghijkl");
// 	printf("The destination string is: %d\n", r);
// 	r=ft_str_is_lowercase("abcghij[`aBCZ");
// 	printf("The destination string is: %d\n", r);
// 	r=ft_str_is_lowercase("23adsaffq");
// 	printf("The destination string is: %d\n", r);

// 	return (0);
// }
