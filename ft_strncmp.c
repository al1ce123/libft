/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:54:57 by nlence-l          #+#    #+#             */
/*   Updated: 2023/12/10 21:54:58 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			it;

	it = 0;
	if (n > 0)
	{
		ptr1 = (unsigned char *)s1;
		ptr2 = (unsigned char *)s2;
		while ((ptr1[it] == ptr2[it] && ptr1[it] != '\0' && it < n - 1))
		{
			it++;
		}
		if (ptr1[it] != ptr2[it])
			return (ptr1[it] - ptr2[it]);
	}
	return (0);
}
