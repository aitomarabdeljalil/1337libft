/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:24:06 by aait-oma          #+#    #+#             */
/*   Updated: 2021/11/11 12:26:22 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		while (str[i] != c && str[i])
			i++;
		count++;
	}
	if (str[i - 1] == c)
		count--;
	return (count);
}

static size_t	ft_wordlen(const char *str, char c)
{
	size_t	len;

	len = 0;
	while (*str != c && *str)
	{
		str++;
		len++;
	}
	return (len);
}

static char	**ft_clean(char **ptr, size_t count)
{
	size_t	i;

	if (ptr)
	{
		i = 0;
		while (i < count)
		{
			if (ptr[i])
				free(ptr[i]);
			i++;
		}
		free(ptr);
	}
	return (NULL);
}

static char	**copyover(char **output, const char *s, char c)
{
	size_t	j;
	size_t	k;

	j = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s == '\0')
			continue ;
		output[j] = malloc(sizeof(char *) * ft_wordlen(s, c) + 1);
		if (output[j] == NULL)
			return (ft_clean(output, j));
		k = 0;
		while (*s != c && *s)
		{
			output[j][k] = *s;
			k++;
			s++;
		}
		output[j][k] = '\0';
		j++;
	}
	output[j] = NULL;
	return (output);
}

char	**ft_split(const char *s, char c)
{
	char	**output;

	if (s == NULL)
		return (NULL);
	output = malloc(sizeof(char *) * ft_wordcount(s, c) + 1);
	if (output == NULL)
		return (NULL);
	copyover(output, s, c);
	return (output);
}
