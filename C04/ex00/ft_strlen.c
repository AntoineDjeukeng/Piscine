/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 23:23:35 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/13 23:46:44 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int		nb;
// 	char	*message;
// 	char	*text;
// 	text = "Hello,     world!";
// 	message = &text[0];
// 	nb = 0;
// 	nb = ft_strlen(message);
// 	printf("the lenght of the string is %d \n", nb);
// 	return (0);
// }
