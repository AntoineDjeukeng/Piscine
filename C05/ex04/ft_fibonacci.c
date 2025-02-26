/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 23:34:52 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/18 23:55:38 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (ft_fibonacci(n - 1) + ft_fibonacci(n - 2));
}
// #include <stdio.h>

// int	ft_fibonacci(int n);

// int	main(void)
// {
// 	printf("Fibonacci(0): %d\n", ft_fibonacci(0));
// 	printf("Fibonacci(1): %d\n", ft_fibonacci(1));
// 	printf("Fibonacci(2): %d\n", ft_fibonacci(2));
// 	printf("Fibonacci(3): %d\n", ft_fibonacci(3));
// 	printf("Fibonacci(4): %d\n", ft_fibonacci(4));
// 	printf("Fibonacci(5): %d\n", ft_fibonacci(5));
// 	printf("Fibonacci(10): %d\n", ft_fibonacci(10));
// 	printf("Fibonacci(-1): %d\n", ft_fibonacci(-1));
// 	return (0);
// }
