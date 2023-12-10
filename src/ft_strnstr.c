/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:55:01 by nlence-l          #+#    #+#             */
/*   Updated: 2023/12/10 22:14:48 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static int	is_match(const char *haystack, const char *needle, size_t len)
{
	while (*haystack != '\0' && *haystack == *needle && len != 0)
	{
		haystack++;
		needle++;
		len--;
	}
	if (*needle == '\0')
		return (1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*found_pointer;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && len != 0)
	{
		if (*haystack == *needle)
		{
			found_pointer = (char *)haystack;
			if (is_match(found_pointer, needle, len))
				return (found_pointer);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
