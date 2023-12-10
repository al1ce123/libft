/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:53:51 by nlence-l          #+#    #+#             */
/*   Updated: 2023/12/10 21:53:52 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			count;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	if (dst < src)
	{
		count = 0;
		while (count < len)
		{	
			ptr1[count] = ptr2[count];
			count++;
		}
	}
	else if (src < dst)
	{
		while (len--)
			ptr1[len] = ptr2[len];
	}
	return (dst);
}
