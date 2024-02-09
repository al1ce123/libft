/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:47:50 by nlence-l          #+#    #+#             */
/*   Updated: 2024/02/09 14:29:37 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *ptr1 = (const unsigned char *)s1;
    const unsigned char *ptr2 = (const unsigned char *)s2;
    size_t i;
    
    i = 0;
    while (i < n)
    {
        if (ptr1[i] != ptr2[i])
        {
            return (ptr1[i] - ptr2[i]);
        }
        i++;
    }
    return (0);
}