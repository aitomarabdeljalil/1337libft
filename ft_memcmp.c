/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:08:22 by aait-oma          #+#    #+#             */
/*   Updated: 2021/11/04 18:03:12 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *t1;
	unsigned char *t2;
	size_t	i;

	t1 = (unsigned char *) s1;
	t2 = (unsigned char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	if (t1[i] == '\0' && t2[i] == '\0')
		return (0);
	while (t1[i] == t2[i] && i < n)
		i++;
	return (t1[i] - t2[i]);
}