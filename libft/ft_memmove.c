/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <cbartoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 13:01:22 by cbartoli          #+#    #+#             */
/*   Updated: 2017/12/01 19:17:51 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char*)dest;
	b = (unsigned char*)src;
	while (i < n)
	{
		if (a > b)
		{
			a[n - 1] = b[n - 1];
			n--;
		}
		else
		{
			a[i] = b[i];
			i++;
		}
	}
	return (dest);
}
