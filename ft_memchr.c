/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:53:37 by nlence-l          #+#    #+#             */
/*   Updated: 2023/12/10 21:53:38 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*ptr_s;
	unsigned char	character;

	ptr_s = (unsigned char *)s;
	character = (unsigned char)c;
	count = 0;
	while (count < n)
	{
		if (ptr_s[count] == character)
			return (&ptr_s[count]);
		count++;
	}
	return (NULL);
}
