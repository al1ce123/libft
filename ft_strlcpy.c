/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:54:45 by nlence-l          #+#    #+#             */
/*   Updated: 2023/12/10 21:54:46 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_lenght;
	size_t	count;

	if (dstsize > 0)
	{
		count = 0;
		dstsize--;
		while (src[count] && count < dstsize)
		{
			dst[count] = src[count];
			count++;
		}
		dst[count] = '\0';
	}
	src_lenght = ft_strlen(src);
	return (src_lenght);
}
