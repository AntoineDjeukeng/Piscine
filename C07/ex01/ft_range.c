/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 12:50:56 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/23 12:29:44 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	n;
	int	*range;

	if (max <= min)
		return (NULL);
	n = 0;
	while ((n + min) < max)
		n++;
	range = (int *)malloc((n + 1) * sizeof(int));
	i = 0;
	while (i <= n)
	{
		range[i] = i + min;
		i++;
	}
	return (range);
}
// #include <stdio.h>
// int main (void)
// {
// 	int i;
// 	int *range;
// 	i = 0;
// 	range = ft_range(10, 25);
// 	while (i<5)
// 	{
// 		printf("%d\t",range[i]);
// 		i++;
// 	}

// }
