/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:24:53 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/13 01:18:29 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	while (n > 0 && *s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*s1 - *s2);
}

// #include <stdio.h>
// int main() {
//     // Hardcoded examples for string comparisons
//     const char *str1 = "apple";
//     const char *str2 = "apples";
//     int len = 4;
//     int res;
//     printf("Comparison 2:\n");
//     res = ft_strncmp(str1, str2, len);
//     if (res == 0) {
//         printf("\"%s\" and \"%s\" equal %d characters\n", str1, str2, len);
//     } else if (res < 0) {
//         printf("\"%s\" is less than \"%s\" (%d)\n", str1, str2, res);
//     } else {
//         printf("\"%s\" is greater than \"%s\" (%d)\n", str1, str2, res);
//     }
//     return (0);
// }
