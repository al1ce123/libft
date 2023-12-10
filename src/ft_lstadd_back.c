/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:53:00 by nlence-l          #+#    #+#             */
/*   Updated: 2023/12/10 22:14:48 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_element;

	if (lst && new)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			last_element = ft_lstlast(*lst);
			last_element->next = new;
		}
	}
}
