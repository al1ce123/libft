/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:53:07 by nlence-l          #+#    #+#             */
/*   Updated: 2023/12/10 21:53:08 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*last_element;
	t_list	*element;

	if (!lst)
		return ;
	element = *lst;
	while (element)
	{
		last_element = element;
		element = element->next;
		del(last_element->content);
		free(last_element);
	}
	*lst = NULL;
}
