/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 08:06:48 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/11 14:05:45 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// #include <stdio.h>
// int main(void)
// {
//     int A;
//     int B;
//     int *a;
//     int *b;   
//     A = 14;
//     B = 5;
//     a = &A;
//     b = &B;
//     printf("Before: a = %d, b = %d\n", *a, *b);
//     ft_ultimate_div_mod(a, b);
//     printf("After: a = %d (quotient), b = %d (remainder)\n", *a, *b);
//     return 0;
// }