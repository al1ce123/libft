/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:53:36 by nlence-l          #+#    #+#             */
/*   Updated: 2024/02/09 14:10:49 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t dst_len;
    size_t dst_len_init;
    size_t src_len;
    size_t remaining_space;

    if (!dst || !src)
        return (0);
    i = 0;
    dst_len = ft_strlen(dst);
    dst_len_init = dst_len;
    remaining_space = size - dst_len -1;
    while (i < remaining_space && src[i])
    {
        dst[dst_len] = src[i];
        i++;
        dst_len++;
    }
    dst[dst_len] = '\0';
    src_len = ft_strlen(src);
    return (dst_len_init + src_len);
}