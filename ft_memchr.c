/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:03:35 by aait-oma          #+#    #+#             */
/*   Updated: 2021/11/04 15:31:49 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    char    *ps;
    size_t  i;
    
    ps = (char *)s;
    i = 0;
    while (ps[i] != (char) c && ps[i] != '\0')
        i++;
    if (ps[i] == (char) c)
        return ((void *)ps);
    return (NULL);
}