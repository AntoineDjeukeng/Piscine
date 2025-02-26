/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 08:55:14 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/11 14:06:57 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	n;
	int	b;

	n = 0;
	while (n < size / 2)
	{
		b = tab[n];
		tab[n] = tab[size - n - 1];
		tab[size - n - 1] = b;
		n++;
	}
}

// #include <stdio.h>
// int main (void)
// {
//     int n;
//     n=4;
//     int b[n];
//     int i;
//     b[0] = 0; 
//     b[1] = 1; 
//     b[2] = 2; 
//     b[3] = 3; 
//     // b[4] = 4; 
//     for (i=0; i<n; i++)
//     {
//         printf("%d ", b[i]);
//     }
//     printf("\n");
//     ft_rev_int_tab(&b[0],n);
//     printf("\n");
//     for (i=0; i<n; i++)
//     {
//         printf("%d ", b[i]);
//     }
// }