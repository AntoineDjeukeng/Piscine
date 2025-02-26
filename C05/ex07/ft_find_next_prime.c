/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 23:42:48 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/19 12:02:05 by adjeuken         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
// #include <stdio.h>
// int	ft_find_next_prime(int nb);
// int	main(void)
// {
// 	printf("Next prime after 2: %d\n", ft_find_next_prime(2));
// 	printf("Next prime after 3: %d\n", ft_find_next_prime(3));
// 	printf("Next prime after 4: %d\n", ft_find_next_prime(4));
// 	printf("Next prime after 10: %d\n", ft_find_next_prime(10));
// 	printf("Next prime after 20: %d\n", ft_find_next_prime(20));
// 	printf("Next prime after 0: %d\n", ft_find_next_prime(0));
// 	printf("Next prime after -5: %d\n", ft_find_next_prime(-5));
// 	return (0);
// }
