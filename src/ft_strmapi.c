/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:54:53 by nlence-l          #+#    #+#             */
/*   Updated: 2023/12/10 22:14:48 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	array_lenght;
	size_t	count;
	char	*ptr;

	if (!s)
		return (NULL);
	array_lenght = ft_strlen(s);
	ptr = malloc(sizeof(char) * array_lenght + 1);
	if (!ptr)
		return (NULL);
	count = 0;
	while (s[count])
	{
		ptr[count] = f(count, s[count]);
		count++;
	}
	ptr[count] = '\0';
	return (ptr);
}
