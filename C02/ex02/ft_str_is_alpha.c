/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:50:44 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/02/13 07:18:55 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>
// int main(void)
// {
// 	int r;
// 	r=ft_str_is_alpha("abcdefghijkl");
// 	printf("The destination string is: %d\n", r);
// 	r=ft_str_is_alpha("abcghij[`aBCZ");
// 	printf("The destination string is: %d\n", r);
// 	r=ft_str_is_alpha("23adsaffq");
// 	printf("The destination string is: %d\n", r);

// 	return (0);
// }
