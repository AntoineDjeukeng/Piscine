/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:38:47 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/13 01:18:10 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
// #include <stdio.h>
// int main() {
//     // Hardcoded examples for string comparisons
//     char *str1 = "ABA";
//     char *str2 = "ABZ";
//     int res;
//     printf("Comparison 1:\n");
//     res = my_strcmp(str1, str2);
//     if (res == 0) {
//         printf("\"%s\" and \"%s\" are equal\n", str1, str2);
//     } else if (res < 0) {
//         printf("\"%s\" is less than \"%s\" (%d)\n", str1, str2, res);
//     } else {
//         printf("\"%s\" is greater than \"%s\" (%d)\n", str1, str2, res);
//     }
//     return (0);
// }
