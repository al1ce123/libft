/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:20:52 by nlence-l          #+#    #+#             */
/*   Updated: 2024/02/09 16:41:31 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_atoi(const char *nptr)
{
    int i;
    int pow;
    int sign;
    int res;

    i = 0;
    pow = 1;
    sign = 1;
    res = 0;
    if (!nptr)
        return (0);
    while (nptr[i] == ' ' || nptr[i] == '\t')
        i++;
    if (nptr[i] == '+') 
        i++;
    else if (nptr[i] == '-')
    {
        sign *= -1;
        i++;
    }
    if (nptr[i] && !ft_isdigit(nptr[i]))
        return (0);
    else
    {
        while (nptr[i] && ft_isdigit(nptr[i]))
            i++;
        --i;
        while (i >= 0 && ft_isdigit(nptr[i]))
        {
            res += nptr[i] - '0' * pow;
            pow *= 10;
        }
    }
    return (res * sign);
}





