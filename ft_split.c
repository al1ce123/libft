/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:54:18 by nlence-l          #+#    #+#             */
/*   Updated: 2023/12/10 21:54:19 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	size_t	num_words;

	num_words = 0;
	while (*s)
	{
		while(*s == c)
			s++;
		if (*s != '\0')
			num_words++;
		while(*s && *s != c)
			s++;
	}
	return (num_words);
}

static char	**free_matrix(char **matrix, size_t pos)
{
	size_t	i;

	i = 0;
	while (i < pos)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	start;
	size_t	pos;
	size_t	i;

	result = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	pos = 0;
	start = 0;
	while (s[i])
	{
		if (i > 0 && s[i] != c && s[i - 1] == c)
			start = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			result[pos++] = ft_substr(s, start, i - start + 1);
			if (!result[pos - 1])
				return (free_matrix(result, pos - 1));
		}
		i++;
	}
	result[pos] = NULL;
	return (result);
}
