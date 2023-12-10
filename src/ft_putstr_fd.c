/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:54:14 by nlence-l          #+#    #+#             */
/*   Updated: 2023/12/10 22:14:48 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	count;

	if (s && fd >= 0)
	{
		count = 0;
		while (s[count])
		{
			write(fd, &s[count], 1);
			count++;
		}
	}
}
