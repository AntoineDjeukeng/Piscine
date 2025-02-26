/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 12:51:07 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/23 16:34:22 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}

char	*ft_strcat2(char **strs, char *sep, int size, char *ptr)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ptr = ft_strcat(ptr, strs[i]);
		if (i < size - 1)
			ptr = ft_strcat(ptr, sep);
		i++;
	}
	return (ptr);
}

int	ft_getlengt(char **strs, int n, char *sep)
{
	int	i;
	int	total_length;

	i = 0;
	total_length = 0;
	while (i < n)
	{
		total_length += ft_strlen(strs[i]);
		i++;
	}
	total_length += (n - 1) * ft_strlen(sep) + 1;
	return (total_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_length;
	char	*result;
	char	*ptr;

	total_length = 0;
	if (size == 0)
	{
		result = malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	total_length = ft_getlengt(strs, size, sep);
	result = malloc(total_length);
	if (!result)
		return (NULL);
	ptr = result;
	ptr[0] = '\0';
	ptr = ft_strcat2(strs, sep, size, ptr);
	return (result);
}
// int	main(void)
// {
// 	char	*strs[] = {"Hello", "world", "this", "is", "C"};
// 	char	*sep;
// 	char	*result;
// 	sep = "-";
// 	result = ft_strjoin(5, strs, sep);
// 	if (result)
// 	{
// 		printf("Joined string: \"%s\"\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed!\n");
// 	}
// 	result = ft_strjoin(0, strs, sep);
// 	if (result)
// 	{
// 		printf("Empty join: \"%s\"\n", result);
// 		free(result);
// 	}
// 	return (0);
// }
