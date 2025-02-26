/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 08:28:06 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/11 14:06:11 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

// int main(void)
// {
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
//     ft_putstr(message);
//     ft_putstr("\n"); 
//     return 0;
// }