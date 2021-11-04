/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:32:04 by aait-oma          #+#    #+#             */
/*   Updated: 2021/11/04 12:09:55 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    char    *temp;

    temp = malloc(len * sizeof(char));
    if (temp != NULL)
    {
        ft_memcpy(temp, src, len);
        ft_memcpy(dst, temp, len);
    }
    return (dst);
}