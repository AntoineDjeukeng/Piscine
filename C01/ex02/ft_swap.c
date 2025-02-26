/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:48:21 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/11 14:04:39 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

// int main(void)
// {
//     int a = 4;
//     int b = 2;

//     printf("%d%d\n", a, b);
//     ft_swap(&a, &b);
//     printf("%d%d\n", a, b);

//     return 0;
// }