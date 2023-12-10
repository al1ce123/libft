/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:54:41 by nlence-l          #+#    #+#             */
/*   Updated: 2023/12/10 21:54:42 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	count2;

	count = ft_strlen(dst);
	if (dstsize < count)
		return (dstsize + ft_strlen(src));
	count2 = 0;
	if (dstsize)
	{
		dstsize--;
		while (src[count2] && count < dstsize)
			dst[count++] = src[count2++];
	}
	dst[count] = '\0';
	while (src[count2++])
		count++;
	return (count);
}
