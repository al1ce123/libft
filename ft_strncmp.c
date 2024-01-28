/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:30:30 by nlence-l          #+#    #+#             */
/*   Updated: 2024/01/28 19:38:40 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    if (!s1 || !s2)
        return (-1);
    while (i < n && s1[i] && s2[i])
    {
        if (s1[i] == s2[i])
            i++;
        else
            return ((int)(unsigned char)s1[i] - (int)(unsigned char)s2[i]);
    }
    if (i < n)
        return (int)(unsigned char)s1[i] - (int)(unsigned char)s2[i];
    else
        return 0;
}