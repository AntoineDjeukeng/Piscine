/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:47:59 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/15 13:01:56 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2, int j)
{
	int	i;

	i = 0;
	while (s1[i + j] && s2[i] && (s2[i] == s1[i + j]))
		i++;
	if (s2[i] == '\0')
		return (1);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	j;
	int	r;

	j = 0;
	if (*to_find == '\0')
		return (str);
	while (str[j] != '\0')
	{
		if (str[j] == to_find[0])
		{
			r = ft_strcmp(str, to_find, j);
			if (r == 1)
				return (&str[j]);
		}
		j++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;
// 	char	*sub;
// 	char	*result;

// 	str = "Hello, piscine Benguerir Khouribga this is a simple tost.";
// 	sub = "piscine Benguerir Khouribga";
// 	result = ft_strstr(str, sub);
// 	if (result)
// 		printf("Substring found: %s\n", result);
// 	else
// 		printf("Substring not found.\n");
// 	return (0);
// }
