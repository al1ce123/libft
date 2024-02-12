/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:11:42 by nlence-l          #+#    #+#             */
/*   Updated: 2024/02/12 18:16:45 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    char *ptr;
    char *res;

    if (!s)
        return (NULL);
    ptr = (char *)malloc(ft_strlen(s) + 1);
    if (!ptr)
        return (NULL);
    res = ptr;
    while (*s)
    {
        *ptr = *s;
        ptr++;
        s++;
    }
    *ptr = '\0';
    return (res);
}