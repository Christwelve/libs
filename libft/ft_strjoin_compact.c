/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_compact.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianmeng <christianmeng@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:36:45 by cmeng             #+#    #+#             */
/*   Updated: 2023/03/09 20:07:58 by christianme      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// edited: '\n' overwritten with src[ft_strlen(src) - 1] = 0

int	ft_strjoin_compact(char **dst, char *src)
{
	char	*new;
	int		len;

	len = ft_strlen(src);
	new = ft_strjoin(*dst, src);
	free(*dst);
	free(src);
	*dst = new;
	return (new == NULL);
}
