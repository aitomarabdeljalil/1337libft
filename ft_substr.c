/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:27:03 by aait-oma          #+#    #+#             */
/*   Updated: 2021/11/03 21:37:03 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    char    *sub;
    
    i = 0;
    sub = malloc(len +1);
    if(sub == NULL)
        return (NULL);
    while (i < len)
    {
        sub[i] = s[start + i - 1];
        i++;
    }
    sub[i] = '\0';
    return (sub);
}