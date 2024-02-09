/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:21:58 by nlence-l          #+#    #+#             */
/*   Updated: 2024/02/09 14:11:00 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t i;
    size_t s_len;

    i = 0;
    if (!s)
        return (NULL);
    s_len = ft_strlen(s) - 1;
    while (s_len >= i)
    {
        if (s[s_len] == (char)c)
            return ((char *)&s[s_len]);
        s_len--;
    }
    return (NULL);
}