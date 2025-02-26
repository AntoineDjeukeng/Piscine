/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 00:11:01 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/18 22:43:50 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	result;

	i = 0;
	minus = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = ((result * 10) + (str[i] - '0'));
		i++;
	}
	return (result * minus);
}

// int	main(void)
// {
// 	char	str[] = "  -12345";
// 	printf("%d\n", ft_atoi(str));
// 	return (0);
// }
// int	main(void)
// {
// 	char	*str = " ---+--+1234ab567";
// 	int		val = ft_atoi(str);
// 	printf("\nThe value is %d\n", val);
// 	return (0);
// }
