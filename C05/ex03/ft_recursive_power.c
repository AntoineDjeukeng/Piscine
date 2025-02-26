/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 23:32:15 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/18 23:55:34 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int base, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (base * ft_recursive_power(base, power - 1));
}
// #include <stdio.h>

// int	ft_recursive_power(int base, int power);

// int	main(void)
// {
// 	printf("3^4: %d\n", ft_recursive_power(3, 4));
// 	printf("2^0: %d\n", ft_recursive_power(2, 0));
// 	printf("0^0: %d\n", ft_recursive_power(0, 0));
// 	printf("2^(-3): %d\n", ft_recursive_power(2, -3));
// 	printf("5^3: %d\n", ft_recursive_power(5, 3));
// 	return (0);
// }
