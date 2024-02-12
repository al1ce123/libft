/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:19:29 by nlence-l          #+#    #+#             */
/*   Updated: 2024/02/12 18:25:38 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *ptr;
    char *res;
    
    if (!s)
        return (NULL);
    ptr = (char *)malloc(len + 1);
    if (!ptr)
        return (NULL);
    res = ptr;
    while (s[start] && len > 0)
    {
        *ptr = s[start];
        ptr++;
        start++;
        len--;
    }
    *ptr = '\0';
    return (ptr);
}