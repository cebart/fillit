/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <cbartoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 23:32:17 by cbartoli          #+#    #+#             */
/*   Updated: 2017/12/01 19:52:09 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char		*pdest;
	const char	*psrc;
	size_t		sz;
	size_t		ldest;

	pdest = dest;
	psrc = src;
	sz = size;
	while (*pdest && sz--)
		pdest++;
	ldest = ft_strlen(dest) - ft_strlen(pdest);
	if (!(sz = size - ldest))
		return (ldest + ft_strlen(src));
	while (*psrc)
	{
		if (sz != 1)
		{
			*pdest = *psrc;
			pdest++;
			sz--;
		}
		psrc++;
	}
	*pdest = '\0';
	return (ldest + (ft_strlen(src) - ft_strlen(psrc)));
}
