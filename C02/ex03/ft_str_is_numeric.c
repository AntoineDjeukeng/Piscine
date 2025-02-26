/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:50:44 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/02/13 07:18:43 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}
// #include <stdio.h>
// int main(void)
// {
// 	int r;
// 	r=ft_str_is_numeric("1202");
// 	printf("The destination string is: %d\n", r);
// 	r=ft_str_is_numeric("abcghij[`aBCZ");
// 	printf("The destination string is: %d\n", r);
// 	r=ft_str_is_numeric("23adsaffq");
// 	printf("The destination string is: %d\n", r);

// 	return (0);
// }
