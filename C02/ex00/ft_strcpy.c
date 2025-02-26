/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:50:44 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/02/13 06:42:09 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	src[7];
// 	char	dest[2];

// 	src[0] = 's';
// 	src[1] = 'o';
// 	src[2] = 'u';
// 	src[3] = 'r';
// 	src[4] = 'c';
// 	src[5] = 'e';
// 	src[6] = '\0';
// 	ft_strcpy(dest, src);
// 	printf("The destination string is: %s\n", dest);
// 	return (0);
// }
