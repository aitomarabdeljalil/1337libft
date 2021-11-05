/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:28:44 by aait-oma          #+#    #+#             */
/*   Updated: 2021/11/05 17:43:11 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_swap(char *a, char *b)
{
	char	swapvar;

	swapvar = *a;
	*a = *b;
	*b = swapvar;
}

static char*   ft_reverse(char *buffer, int i, int j)
{
    while (i < j)
        ft_swap(&buffer[i++], &buffer[j--]);
    return buffer;
}

char    *ft_itoa(int n)
{
    int i;
    char    *buffer;

    i = 0;
    while (n)
    {
        int r = n % 10;
        if (r >= 10)
            buffer[i++] = 65 + (r - 10);
        else
            buffer[i++] = 48 + r;
        n = n / 10;
    }
    if (i == 0)
        buffer[i++] = '0';
    if (n < 0)
        buffer[i++] = '-';
    buffer[i] = '\0';
    return (ft_reverse(buffer, 0, i - 1));
}