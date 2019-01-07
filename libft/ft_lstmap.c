/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <cbartoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 14:46:34 by cbartoli          #+#    #+#             */
/*   Updated: 2017/12/01 19:00:09 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*li;
	t_list	*first;
	t_list	*current;

	first = NULL;
	while (lst)
	{
		if (!(li = ft_lstnew(lst->content, lst->content_size)))
			return (NULL);
		li = (*f)(lst);
		if (!first)
		{
			first = li;
			current = first;
		}
		else
		{
			current->next = li;
			current = li;
		}
		lst = lst->next;
	}
	current->next = NULL;
	return (first);
}
