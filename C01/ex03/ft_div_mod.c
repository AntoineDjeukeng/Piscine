/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:21:00 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/11 14:05:04 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>
// int main(void)
// {
//     int *div;
//     int *mod;
//     int a;
//     int b;
//     a=14;
//     b=5;
//     div=&a;
//     mod=&b;
//     printf("div before is: %d\n", *div);
//     printf("mod before is: %d\n", *mod);
//     ft_div_mod(a, b, div, mod);
//     printf("div after is: %d\n", *div);
//     printf("mod after is: %d\n", *mod);
//     return 0;
// }