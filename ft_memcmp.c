/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:09:14 by syakoubi          #+#    #+#             */
/*   Updated: 2021/11/07 16:29:51 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*_s1;
	const unsigned char	*_s2;
	size_t				i;

	if (n == 0)
		return (0);
	i = 0;
	_s1 = s1;
	_s2 = s2;
	while (_s1[i] == _s2[i] && i < n - 1)
		i++;
	return (_s1[i] - _s2[i]);
}
