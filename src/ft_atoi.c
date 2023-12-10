/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:51:46 by nlence-l          #+#    #+#             */
/*   Updated: 2023/12/10 22:14:48 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static int	is_space(char character)
{
	if (character == ' ')
		return (1);
	if (character == '\f')
		return (1);
	if (character == '\n')
		return (1);
	if (character == '\r')
		return (1);
	if (character == '\v')
		return (1);
	if (character == '\t')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	atoi_result;
	int	sign;

	sign = 1;
	while (is_space(*str))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	atoi_result = 0;
	while (*str >= '0' && *str <= '9')
	{
		atoi_result = (atoi_result * 10) + *str - '0';
		str++;
	}
	return (atoi_result * sign);
}
