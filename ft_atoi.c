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

static void init(int *i, int *pow, int *sign, long long *res)
{
    *i = 0;
    *pow = 1;
    *sign = 1;
    *res = 0;
}

static int checks(const char *nptr, int *i, int *sign)
{
    if (!nptr)
        return (-1);
    while (nptr[*i] == ' ' || (nptr[*i] >= 9 && nptr[*i] <= 13))
        (*i)++;
    if (nptr[*i] == '+') 
        (*i)++;
    else if (nptr[*i] == '-')
    {
        *sign *= -1;
        (*i)++;
    }
    if (nptr[*i] && !ft_isdigit(nptr[*i]))
        return (-1);
    return (0);
}


static int get_nbr_len(const char *nptr, int *i, int *sign)
{
    int nbr_len;

    nbr_len = 0;
    while (nptr[*i] && ft_isdigit(nptr[*i]))
    {
        (*i)++;
        nbr_len++;
    }
    if (nbr_len > 19 && *sign == 1)
        return (-1);
    else if (nbr_len > 19 && *sign == -1)
        return (0);
    else if (ft_strncmp(&nptr[*i - nbr_len], "9223372036854775807", nbr_len) == 0 && *sign == 1 && nbr_len == 19)
        return (-1);
    else if (ft_strncmp(&nptr[*i - nbr_len], "9223372036854775808", nbr_len) == 0 && *sign == 1 && nbr_len == 19)
        return (-1);
    else if (ft_strncmp(&nptr[*i - nbr_len], "9223372036854775809", nbr_len) == 0 && *sign == 1 && nbr_len == 19)
        return (-1);
    else if (ft_strncmp(&nptr[*i - nbr_len], "9223372036854775809", nbr_len) == 0 && *sign == -1 && nbr_len == 19)
        return (0);
    return (nbr_len);
}

int     ft_atoi(const char *nptr)
{
    int i;
    int nbr_len;
    int pow;
    int sign;
    long long res;

    if (!nptr)
        return (-1);
    init(&i, &pow, &sign, &res);
    if (checks(nptr, &i, &sign) == -1)
        return (0);
    else
    {
        nbr_len = get_nbr_len(nptr, &i, &sign);
        if (nbr_len == -1)
            return (-1);
        else if (nbr_len == 0)
            return (0);
        while (--i >= 0 && ft_isdigit(nptr[i]))
        {
            res += ((nptr[i] - '0') * pow);
            pow *= 10;
        }
    }
    return (res * sign);
}





