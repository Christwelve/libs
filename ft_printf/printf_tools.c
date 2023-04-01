/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_tools.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianmeng <christianmeng@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:30:06 by cmeng             #+#    #+#             */
/*   Updated: 2023/04/01 16:13:29 by christianme      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s, int should_free)
{
	int	len;

	if (s == NULL)
		return (write(1, "(null)", 6));
	len = ft_strlen(s);
	write(1, s, len);
	if (should_free)
		free(s);
	return (len);
}

int	ft_putnbr(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		len = ft_putstr("-2147483648", 0);
	}
	else
	{
		if (n < 0)
		{
			len += ft_putchar('-');
			n = n * -1;
		}
		if (n > 9)
		{
			len += ft_putnbr(n / 10);
		}
		len += ft_putchar((n % 10) + '0');
	}
	return (len);
}

static int	ft_amount_characters_unsigned(unsigned int n)
{
	int	i;

	i = 1;
	if (n == 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa_unsigned(unsigned int n)
{
	char	*output;
	int		size;

	size = ft_amount_characters_unsigned(n);
	output = ft_calloc((size + 1), sizeof(char));
	if (!output)
		return (NULL);
	while (size)
	{
		output[size - 1] = n % 10 + '0';
		size--;
		n = n / 10;
	}
	return (output);
}
