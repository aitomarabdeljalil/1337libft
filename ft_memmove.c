/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:32:04 by aait-oma          #+#    #+#             */
/*   Updated: 2021/11/04 19:37:37 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    if (src < dst)
    {
        while (len--)
            ((char *) dst)[len] = ((char *) src)[len];
        return (dst);
    }
    else
        return (ft_memcpy(dst, src, len));
}