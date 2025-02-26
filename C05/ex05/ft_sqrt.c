/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 23:36:57 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/18 23:55:46 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// int	ft_sqrt(int nb);
// int	main(void)
// {
// 	printf("Square root of 4: %d\n", ft_sqrt(4));
// 	printf("Square root of 9: %d\n", ft_sqrt(9));
// 	printf("Square root of 16: %d\n", ft_sqrt(16));
// 	printf("Square root of 25: %d\n", ft_sqrt(25));
// 	printf("Square root of 7: %d\n", ft_sqrt(7));
// 	printf("Square root of -4: %d\n", ft_sqrt(-4));
// 	return (0);
// }
