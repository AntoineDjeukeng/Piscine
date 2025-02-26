/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 20:54:19 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/18 22:40:17 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	is_valid_base(char *base)
{
	int	len;
	int	i;
	int	j;

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

int	get_value_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	get_number_from_str(char *str, char *base, int *index)
{
	int	result;
	int	base_len;
	int	value;

	result = 0;
	base_len = ft_strlen(base);
	value = get_value_in_base(str[*index], base);
	while (value != -1)
	{
		result = (result * base_len) + value;
		(*index)++;
		value = get_value_in_base(str[*index], base);
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	if (!is_valid_base(base))
		return (0);
	base_len = ft_strlen(base);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	result = get_number_from_str(str, base, &i);
	return (result * sign);
}

// #include <stdio.h>

// int main()
// {
//     printf("%d\n", ft_atoi_base("1010", "01")); // Binary
//     printf("%d\n", ft_atoi_base("1A", "0123456789ABCDEF"));
//     printf("%d\n", ft_atoi_base("  -12", "0123456789"));
//printf("%d\n", ft_atoi_base("vif", "poneyvif"));
//printf("%d\n", ft_atoi_base("ZZ", "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
// }
