/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 16:12:17 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/15 13:02:31 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lendest;
	unsigned int	lensrc;

	i = 0;
	lensrc = 0;
	lendest = 0;
	lensrc = ft_strlen(src);
	lendest = ft_strlen(dest);
	if (size <= lendest)
		return (lensrc + size);
	while (src[i] != '\0' && i < size - lendest - 1)
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (lendest + lensrc);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char			dest[20] = "Hello, ";
// 	char			src[] = "World!";
// 	unsigned int	size;
// 	unsigned int	result;
// 	size = 5;
// 	result = ft_strlcat(dest, src, size);
// 	printf("Result: %u\n", result);
// 	printf("Dest: %s\n", dest);
// 	return (0);
// }
