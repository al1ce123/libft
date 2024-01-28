/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:43:58 by nlence-l          #+#    #+#             */
/*   Updated: 2024/01/28 18:52:36 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t src_len;

    i = 0;
    src_len = 0;
    if (!dst || !src)
        return (0);
    while (i < size - 1 && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    src_len = ft_strlen(src);
    return (src_len);
}