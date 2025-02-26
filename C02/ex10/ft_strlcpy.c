/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:50:44 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/02/15 09:53:35 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

// unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
// {
//     unsigned int cpt;
//     unsigned int i;
//     cpt = 0;
//     i = 0;
//     while (src[cpt] != '\0')
//         cpt++;
//     if (size == 0)
//         return (0);
//     while (i < cpt && i < (size - 1))
//     {
//         dest[i] = src[i];
//         i++;
//     }
//     dest[i] = '\0';
//     return (cpt);
// }
// #include <stdio.h>
// int	main(void)
// {
// 	char			src[] = "Hello, World!";
// 	char			dest[20];
// 	unsigned int	len;
// 	char			small_dest[6];
// 	char			zero_dest[1];
// 	len = ft_strlcpy(dest, src, sizeof(dest));
// 	printf("Copied string: \"%s\", Length: %u\n", dest, len);
// 	len = ft_strlcpy(small_dest, src, sizeof(small_dest));
// 	printf("Copied string: \"%s\", Length: %u\n", small_dest, len);
// 	len = ft_strlcpy(zero_dest, src, 0);
// 	printf("Length when size=0: %u\n", len);
// 	return (0);
// }
