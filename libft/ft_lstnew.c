/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <cbartoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 13:23:56 by cbartoli          #+#    #+#             */
/*   Updated: 2017/12/01 19:16:41 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *li;

	if (!(li = (t_list *)ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		li->content = NULL;
		li->content_size = 0;
	}
	else
	{
		if (!(li->content = (void *)(ft_memalloc(content_size))))
			return (NULL);
		li->content = ft_memcpy(li->content, content, content_size);
		li->content_size = content_size;
	}
	li->next = NULL;
	return (li);
}
