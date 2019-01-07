/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <cbartoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 19:18:46 by cbartoli          #+#    #+#             */
/*   Updated: 2017/12/01 19:08:24 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*csrc;
	char	*cdest;

	csrc = (char*)src;
	cdest = (char*)dest;
	while (n--)
	{
		*cdest = *csrc;
		if (*csrc == (char)c)
			return (++cdest);
		cdest++;
		csrc++;
	}
	return (NULL);
}
