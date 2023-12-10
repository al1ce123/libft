/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:54:37 by nlence-l          #+#    #+#             */
/*   Updated: 2023/12/10 22:14:48 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	size_t	count;
	size_t	count2;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	ptr = malloc(sizeof(char) * (size +1));
	if (ptr == NULL)
		return (NULL);
	count = 0;
	while (s1[count])
	{
		ptr[count] = s1[count];
		count++;
	}
	count2 = 0;
	while (s2[count2])
	{
		ptr[count + count2] = s2[count2];
		count2++;
	}
	ptr[count + count2] = '\0';
	return (ptr);
}
