/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjeuken <adjeuken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 12:52:40 by adjeuken          #+#    #+#             */
/*   Updated: 2025/02/23 16:19:44 by adjeuken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_findlennb(int nb, int lenb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb /= lenb;
		len++;
	}
	return (len);
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

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
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
