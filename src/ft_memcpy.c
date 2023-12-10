/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:53:46 by nlence-l          #+#    #+#             */
/*   Updated: 2023/12/10 22:14:48 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			count;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (!dst && !src)
		return (dst);
	if (n)
	{
		ptr1 = (unsigned char *)dst;
		ptr2 = (unsigned char *)src;
		count = 0;
		while (count < n)
		{	
			ptr1[count] = ptr2[count];
			count++;
		}
	}
	return (dst);
}
