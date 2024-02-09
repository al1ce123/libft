/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:30:13 by nlence-l          #+#    #+#             */
/*   Updated: 2024/02/09 15:16:54 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    if (little[0] == '\0')
        return ((char *)big);
    i = 0;
    j = 0;
    while (big[i] && i < len)
    {
        if (big[i] == little[j])
        {
            while (big[i] && little[j] && (big[i] == little[j]))
            {
                i++;
                j++;
            }
            if (little[j] == '\0')
                return ((char *)&big[i - j]);
            else
                j = 0;
        }
        i++;
    }
    return (NULL);
}