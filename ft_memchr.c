/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:39:29 by nlence-l          #+#    #+#             */
/*   Updated: 2024/01/28 19:46:43 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    if (!s)
        return (NULL);
    while (i < n)
    {
        if (((unsigned char *)s)[i] == (unsigned char)c)
            return ((void *)&((unsigned char *)s)[i]);
        i++;
    }
    return (NULL);
}