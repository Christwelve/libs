/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christianmeng <christianmeng@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:42:59 by christianme       #+#    #+#             */
/*   Updated: 2023/04/03 12:47:58 by christianme      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_free2(void **arr)
{
    void **tmp;
    
    tmp = arr;
    while (*tmp != NULL)
    {
        free(*tmp);
        tmp++;
    }
    free(arr);
}