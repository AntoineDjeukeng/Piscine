/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 23:16:19 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/18 23:54:56 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
// #include <stdio.h>

// int	ft_iterative_factorial(int nb);

// int	main(void)
// {
// 	printf("Factorial of 0: %d\n", ft_iterative_factorial(0));
// 	printf("Factorial of 1: %d\n", ft_iterative_factorial(1));
// 	printf("Factorial of 5: %d\n", ft_iterative_factorial(5));
// 	printf("Factorial of -3: %d\n", ft_iterative_factorial(-3));
// 	return (0);
// }
