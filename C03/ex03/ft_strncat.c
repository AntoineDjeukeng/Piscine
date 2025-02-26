/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:39:06 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/12 20:58:31 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*start;

	start = dest;
	while (*dest)
		dest++;
	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (start);
}

// #include <stdio.h>
// int main()
// {
//     char str1[20] = "Hello, ";
//     char str2[] = "World!";
//     ft_strncat(str1, str2, 3); // Appends at most 3 characters from `str2`
//     printf("Concatenated String: %s\n", str1); // Output: Hello, Wor
//     return (0);
// }
