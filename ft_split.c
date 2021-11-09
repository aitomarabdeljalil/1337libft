/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:24:06 by aait-oma          #+#    #+#             */
/*   Updated: 2021/11/09 15:38:58 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// char	**ft_split(char const *s, char c)
// {
// 	int		i;
// 	int		j;
// 	int		k;
// 	char	**array;

// 	i = 0;
// 	j = 0;
// 	while (s[i])
// 	{
// 		if (s[i] == c)
// 			j++;
// 		i++;
// 	}
// 	array = (char **) malloc(sizeof(char *) * (j + 1));
// 	i = 0;
// 	while (i < (j + 1))
// 	{
// 		k = 0;
// 		while (s[j] != c)
// 			k++;
// 		k++;
// 		*array = (char *) malloc(sizeof(char) * k);
// 		ft_memcpy(*array, s, (k - 1));
// 		array[k] = '\0';
// 		s += k;
// 		array++;
// 		i++;
// 	}	
// }
