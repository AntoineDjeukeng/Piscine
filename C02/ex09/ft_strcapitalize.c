/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:50:44 by yfeunteu          #+#    #+#             */
/*   Updated: 2025/02/13 07:18:01 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_type(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (2);
	if (c >= 'A' && c <= 'Z')
		return (3);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;
	int	r;

	i = 0;
	c = 1;
	while (str[i] != '\0')
	{
		r = ft_str_type(str[i]);
		if (r > 0)
		{
			if (c == 1 && r == 2)
				str[i] = str[i] - 32;
			else if (c > 1 && r == 3)
				str[i] = str[i] + 32;
			c++;
		}
		else
		{
			c = 1;
		}
		i++;
	}
	return (str);
}
// #include <stdio.h>
// int main(void)
// {
//     char str1[] = "hello world";
//     ft_strcapitalize(str1);
//     printf("Test 1: %s\n", str1);
//     char str2[] = "Hello World";
//     ft_strcapitalize(str2);
//     printf("Test 2: %s\n", str2);

//     ft_strcapitalize(str3);
//     printf("Test 3: %s\n", str3);

//     char str4[] = "hello, world! how are you?";
//     ft_strcapitalize(str4);
//     printf("Test 4: %s\n", str4);

//     char str5[] = "heLLo WoRLD! 123abc";
//     ft_strcapitalize(str5);
//     printf("Test 5: %s\n", str5);

//     char str6[] = "the QUICK brown fox jumps OVER the lazy DOG.";
//     ft_strcapitalize(str6);
//     printf("Test 6: %s\n", str6);

//     char str7[] = "mixed CASE here";
//     ft_strcapitalize(str7);
//     printf("Test 7: %s\n", str7);

//     char str8[] = "123abc def 456ghi!";
//     ft_strcapitalize(str8);
//     printf("Test 8: %s\n", str8);

//     char str9[] = "hello, my name IS john doe!";
//     ft_strcapitalize(str9);
//     printf("Test 9: %s\n", str9);

//     char str10[] = "this IS 4you, have A great day!";
//     ft_strcapitalize(str10);
//     printf("Test 10: %s\n", str10);

//     return 0;
// }
