/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:52:56 by nlence-l          #+#    #+#             */
/*   Updated: 2023/12/10 22:14:48 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static int	calculate_itoa_array_size(int n)
{
	int	array_size;

	array_size = 1;
	if (n < 0)
		array_size++;
	while (n)
	{
		n = n / 10;
		array_size++;
	}
	return (array_size);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		array_size;
	int		sign;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = 1;
	array_size = calculate_itoa_array_size(n);
	ptr = malloc(sizeof(char) * array_size);
	if (!ptr)
		return (NULL);
	if (n < 0)
	{
		sign = -1;
		ptr[0] = '-';
	}
	ptr[--array_size] = '\0';
	while (n)
	{
		ptr[--array_size] = '0' + (n % 10 * sign);
		n = n / 10;
	}
	return (ptr);
}
