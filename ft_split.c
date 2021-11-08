/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:24:06 by aait-oma          #+#    #+#             */
/*   Updated: 2021/11/08 17:40:33 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_func(int count, char const *s, char c, char **array)
{
	int	i;
	int	j;

	i = 0;
	while (i < (count + 1))
	{
		j = 0;
		while (s[j] != c)
			j++;
		j++;
		*array = (char *) malloc(sizeof(char) * j);
		ft_memcpy(*array, s, (j - 1));
		(*array)[j - 1] = '\0';
		s += j;
		array++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int	length;
	int	count;
	int	i;
	int	j;

	length = 0;
	count = 0;
	i = 0;
	j = 0;
	while (*(s++))
	{
		if (*s == c)
			count++;
		length++;
	}
	s -= (length + 1);
	char **array = (char **) malloc(sizeof(char *) * (length + 1));
	char ** base = array;
	ft_func(count, s, c, array);
	*array = NULL;
	return (base);
}
