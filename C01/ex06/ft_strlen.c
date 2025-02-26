/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 08:47:21 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/11 14:06:34 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

// #include <stdio.h>
// int main(void)
// {
//         int nb;
//     char *message;
//     char text[14]; 
//     text[0] = 'H';
//     text[1] = 'e';
//     text[2] = 'l';
//     text[3] = 'l';
//     text[4] = 'o';
//     text[5] = ',';
//     text[6] = ' ';
//     text[7] = 'w';
//     text[8] = 'o';
//     text[9] = 'r';
//     text[10] = 'l';
//     text[11] = 'd';
//     text[12] = '!';
//     text[13] = '\0';
//     // strcpy(text, "Hello, world!");
//     message = &text[0];
//     nb=0;
//     nb=ft_strlen(message);
//     printf("the lenght of the string is %d \n",nb);
//     return 0;
// }