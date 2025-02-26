/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 12:51:00 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/23 12:33:47 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (range == NULL)
		return (-1);
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

// int main() {
//     int *range = NULL;
//     int min = 3, max = 8;
//     int size = ft_ultimate_range(&range, min, max);

//     if (size == -1) {
//         printf("Memory allocation failed!\n");
//         return (1);
//     }

//     printf("Generated array of size %d:\n", size);
//     for (int i = 0; i < size; i++) {
//         printf("%d ", range[i]);
//     }
//     printf("\n");

//     free(range);

//     return (0);
// }
