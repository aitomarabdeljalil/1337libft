/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:56:06 by aait-oma          #+#    #+#             */
/*   Updated: 2021/11/04 11:59:14 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    char    *pd;
    const char  *ps;
    size_t  i;
    
    pd = (char *)dst;
    ps = (const char *)src;
    i = 0;
    if (pd != NULL && ps != NULL)
    {
        while (i < n)
        {
            pd[i] = ps[i];
            i++;
        }
        
    }
    return (dst);
}