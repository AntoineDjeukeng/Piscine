/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 23:21:36 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/18 23:55:07 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
// #include <stdio.h>
// int	ft_recursive_factorial(int nb);

// int	main(void)
// {
// 	printf("Factorial of 0: %d\n", ft_recursive_factorial(0));
// 	printf("Factorial of 1: %d\n", ft_recursive_factorial(1));
// 	printf("Factorial of 5: %d\n", ft_recursive_factorial(5));
// 	printf("Factorial of -3: %d\n", ft_recursive_factorial(-3));
// 	return (0);
// }
