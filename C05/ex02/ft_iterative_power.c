/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 23:30:18 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/18 23:55:30 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int base, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	while (power > 0)
	{
		result *= base;
		power--;
	}
	return (result);
}
// #include <stdio.h>

// int	ft_iterative_power(int base, int power);

// int	main(void)
// {
// 	printf("3^4: %d\n", ft_iterative_power(3, 4));
// 	printf("2^0: %d\n", ft_iterative_power(2, 0));
// 	printf("0^0: %d\n", ft_iterative_power(0, 0));
// 	printf("2^(-3): %d\n", ft_iterative_power(2, -3));
// 	printf("5^3: %d\n", ft_iterative_power(5, 3));
// 	return (0);
// }
