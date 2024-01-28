/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:33:12 by nlence-l          #+#    #+#             */
/*   Updated: 2024/01/28 18:42:34 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    void *temp;

    i = 0;
    if (!dest || !src)
        return (dest);
    temp = (unsigned char *)malloc(n);
    if (!temp)
        return (dest);
    while (i < n)
    {
        ((unsigned char*)temp)[i] = ((const unsigned char*)src)[i];
        i++;
    }
    i = 0;
    while (i < n)
    {
        ((unsigned char*)dest)[i] = ((unsigned char*)temp)[i];
        i++;
    }
    free (temp);
    return (dest);
}