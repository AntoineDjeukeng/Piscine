/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 12:52:44 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/25 14:41:20 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src, int start, int end)
{
	int		i;
	char	*dup;

	i = 0;
	dup = (char *)malloc((end - start + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (start < end)
	{
		dup[i++] = src[start++];
	}
	dup[i] = '\0';
	return (dup);
}

int	ft_find_delimiter(char *str, char *charset, int i)
{
	int	j;

	j = 0;
	while (charset[j] != '\0')
	{
		if (str[i] == charset[j])
			return (1);
		j++;
	}
	return (0);
}

char	**ft_splittt(int Tlen, char **array, char *charset, char *str)
{
	int	i;
	int	sep;
	int	start;

	i = 0;
	sep = 0;
	start = 0;
	while (i <= Tlen)
	{
		if (ft_find_delimiter(str, charset, i) || str[i] == '\0')
		{
			if (i > start)
			{
				array[sep] = ft_strdup(str, start, i);
				sep++;
			}
			start = i + 1;
		}
		i++;
	}
	return (array);
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		tlen;
	int		i;
	int		sep;

	tlen = ft_strlen(str);
	i = 0;
	sep = 0;
	while (i < tlen)
	{
		if (ft_find_delimiter(str, charset, i) || str[i + 1] == '\0')
		{
			sep++;
		}
		i++;
	}
	array = (char **)malloc((sep + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	array = ft_splittt(tlen, array, charset, str);
	array[sep] = NULL;
	return (array);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "hello,world,42,split";
// 	char	charset[] = ",;";
// 	char	**result;

// 	result = ft_split(str, charset);
// 	for (int i = 0; result[i] != NULL; i++)
// 	{
// 		printf("Substring %d: %s\n", i, result[i]);
// 	}
// 	for (int i = 0; result[i] != NULL; i++)
// 	{
// 		free(result[i]);
// 	}
// 	free(result);
// 	return (0);
// }
