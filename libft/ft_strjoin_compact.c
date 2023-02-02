/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_compact.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmeng <cmeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:36:45 by cmeng             #+#    #+#             */
/*   Updated: 2023/02/02 13:36:50 by cmeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strjoin_compact(char **dst, char *src)
{
	char	*new;

	src[ft_strlen(src) - 1] = 0;
	new = ft_strjoin(*dst, src);
	free(*dst);
	free(src);
	*dst = new;
	return (new == NULL);
}
