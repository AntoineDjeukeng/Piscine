/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 12:52:36 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/23 16:31:05 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_strlen(char *str);
int		get_value_in_base(char c, char *base);
int		ft_findlennb(int nb, int lenb);
int		get_number_from_str(char *str, char *base, int *index);

int	is_valid_base(char *base)
{
	int	len;
	int	j;
	int	i;

	len = ft_strlen(base);
	if (len < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' || (base[i] >= 9
				&& base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	*get_str_for_zero(char *base)
{
	char	*result;

	result = malloc(2);
	if (!result)
		return (NULL);
	result[0] = base[0];
	result[1] = '\0';
	return (result);
}

char	*get_str_from_number(int nb, char *base, int sign)
{
	int		base_len;
	int		len;
	char	*result;

	base_len = ft_strlen(base);
	if (base_len < 2)
		return (NULL);
	if (nb == 0)
		return (get_str_for_zero(base));
	len = ft_findlennb(nb, base_len);
	result = malloc(len + sign + 1);
	if (!result)
		return (NULL);
	result[len + sign] = '\0';
	if (sign == 1)
		result[0] = '-';
	while (nb)
	{
		result[--len + sign] = base[nb % base_len];
		nb /= base_len;
	}
	return (result);
}

char	*ft_convert_base(char *str, char *base_from, char *base_to)
{
	int		result;
	int		sign;
	int		i;
	int		valsign;
	char	*newresult;

	result = 0;
	sign = 1;
	i = 0;
	valsign = 0;
	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return (NULL);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	result = get_number_from_str(str, base_from, &i);
	if (sign < 0)
		valsign = 1;
	newresult = get_str_from_number(result, base_to, valsign);
	return (newresult);
}

// void	ft_convert_base_test(char *str, char *base_from, char *base_to)
// {
// 	char	*result;

// 	result = ft_convert_base(str, base_from, base_to);
// 	if (result)
// 	{
// 		printf("Converted: %s\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Error in conversion\n");
// 	}
// }

// int	main(void)
// {
// 	char	*base_from;
// 	char	*base_to;
// 	char	*str;

// 	base_from = "0123456789ABCDEF";
// 	base_to = "01";
// 	str = "1A";
// 	ft_convert_base_test(str, base_from, base_to);
// 	base_from = "0123456789ABCDEF";
// 	base_to = "0123456789";
// 	str = "-F";
// 	ft_convert_base_test(str, base_from, base_to);
// 	base_from = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// 	base_to = "0123456789";
// 	str = "1Z";
// 	ft_convert_base_test(str, base_from, base_to);
// 	return (0);
// }
