/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianmeng <christianmeng@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 22:08:35 by cmeng             #+#    #+#             */
/*   Updated: 2023/04/01 16:13:38 by christianme      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_amount_characters_hex(unsigned long n)
{
	int	i;

	i = 1;
	if (n == 0)
		i++;
	while (n)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

int	ft_hex(unsigned long n)
{
	unsigned long		temp;
	int					size;
	int					res;
	char				*str;

	size = ft_amount_characters_hex(n);
	res = 0;
	str = ft_calloc((size + 1), sizeof(char));
	if (!str)
		return (0);
	while (size)
	{
		temp = n % 16;
		if (temp < 10)
			temp += '0';
		else
			temp += 'a' - 10;
		str[--size] = temp;
		n = n / 16;
	}
	res += ft_putstr(str, 1);
	return (res);
}

int	ft_hex_upper(unsigned long n)
{
	unsigned long	temp;
	int				size;
	int				res;
	char			*str;

	size = ft_amount_characters_hex(n);
	res = 0;
	str = ft_calloc((size + 1), sizeof(char));
	if (!str)
		return (0);
	while (size)
	{
		temp = n % 16;
		if (temp < 10)
			temp += '0';
		else
			temp += 'A' - 10;
		str[--size] = temp;
		n = n / 16;
	}
	res += ft_putstr(str, 1);
	return (res);
}
