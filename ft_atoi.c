/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:20:52 by nlence-l          #+#    #+#             */
/*   Updated: 2024/02/09 15:47:59 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int get_lenght(const char *nptr)
{
    int i;
    int len;

    i = 0;
    len = 0;
    if (!nptr)
        return (-1);
    while (nptr[i] == ' ' || nptr[i] == '\t')
        i++;
    if (nptr[i] == '+') 
        i++;
    else if (nptr[i++] == '-')
        i++;
    if (nptr[i] && !ft_isdigit(nptr[i]))
        return (-1);
    else
    {
        while (nptr[i] && ft_isdigit(nptr[i]))
        {
            i++;
            len++;
        }
        return (len);
    }
}

static int get_pow(int len)
{
    int res;

    res = 1;
    while (len > 1)
    {
        res *= 10;
        len--;
    }
    return (res);
}

int     ft_atoi(const char *nptr)
{
    int i;
    int pow;
    int sign;
    int res;

    i = 0;
    pow = get_pow(get_len(nptr));
    if (pow < 0)
        return (0);
    sign = 1;
    if (!nptr)
        return (0);
    while (nptr[i])
    {

    }
}