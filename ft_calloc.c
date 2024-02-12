/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:46:18 by nlence-l          #+#    #+#             */
/*   Updated: 2024/02/12 18:07:59 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    long long total;
    size_t i;
    
    if (nmemb == 0 || size == 0)
        return (NULL);
    total = nmemb * size;
    if (total > INT_MAX || total < 0)
        return (NULL);
    ptr = malloc(total);
    if (!ptr)
        return (NULL);
    i = 0;
    while (i < total)
    {
        *((char *)ptr + i) = 0;
        i++;
    }
    return (ptr);
}