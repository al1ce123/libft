/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:21:15 by nlence-l          #+#    #+#             */
/*   Updated: 2024/01/28 18:31:57 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *memcpy(void *dest, const void *src, size_t n)
{
    size_t i;

    i = 0;
    if (!dest || !src)
        return (dest);
    while (i < n)
    {
        ((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
        i++;
    }
    return (dest);
}