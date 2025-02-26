/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:11:32 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/11 14:07:35 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	copy(int *a, int *b, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		a[i] = b[i];
		i++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;
	int	c;

	i = 0;
	c = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

// #include <stdio.h>
// int main(void)
// {
//     int n = 4;
//     int b[n];
//     int i;
//     b[0] = 5; 
//     b[1] = 8; 
//     b[2] = 0; 
//     b[3] = -3; 
//     printf("Original array: ");
//     i = 0;
//     while (i < n) {
//         printf("%d ", b[i]);
//         i++;
//     }
//     printf("\n");
//     ft_sort_int_tab(b, n);
//     printf("Sorted array: ");
//     i = 0;
//     while (i < n) {
//         printf("%d ", b[i]);
//         i++;
//     }
//     printf("\n");
//     return 0;
// }