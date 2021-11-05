/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:28:44 by aait-oma          #+#    #+#             */
/*   Updated: 2021/11/05 12:25:46 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_swap(int *a, int *b)
{
	int	swapvar;

	swapvar = *a;
	*a = *b;
	*b = swapvar;
}

static void ft_reverse(char str[], int length)
{
    int start = 0;
    int end = length -1;
    while (start < end)
    {
        ft_swap(*(str+start), *(str+end));
        start++;
        end--;
    }
}

char    *ft_itoa(int n)
{
    int i;
    char *str;
    int isneg;
    int res;
    
    i = 0;
    isneg = 0;
    if (n == 0)
    {
        if (!(str = malloc(2)))
            return (NULL);
        str[0] = '0';
        str[1] = '\0';
        return (str); 
    }
    else if (n < 0)
    {
        isneg = -1;
        n = -n;
    }
    while (n != 0)
    {
        int rem = n % 10;
        str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0';
        n = n / 10;
    }
    if (isneg == -1)
        str[i] == '-';
    str[i] = '\0';
    ft_reverse(str,i);
    return(str);
}