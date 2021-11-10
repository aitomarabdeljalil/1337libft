/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:25:14 by syakoubi          #+#    #+#             */
/*   Updated: 2021/11/10 19:19:50 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*_dst;
	const unsigned char	*_src;

	_dst = dst;
	_src = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n--)
		*(_dst++) = *(_src++);
	return (dst);
}
