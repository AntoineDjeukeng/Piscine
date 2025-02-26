/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 23:40:23 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/19 00:00:11 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>

// int ft_is_prime(int nb);

// int main()
// {
//     printf("Is 2 prime? %d\n", ft_is_prime(2));
//     printf("Is 3 prime? %d\n", ft_is_prime(3));
//     printf("Is 4 prime? %d\n", ft_is_prime(4));
//     printf("Is 5 prime? %d\n", ft_is_prime(5));
//     printf("Is 29 prime? %d\n", ft_is_prime(29));
//     printf("Is 11 prime? %d\n", ft_is_prime(11));
//     printf("Is 1 prime? %d\n", ft_is_prime(1));
//     printf("Is 0 prime? %d\n", ft_is_prime(0));
//     return (0);
// }
