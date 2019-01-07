/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <cbartoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:47:40 by cbartoli          #+#    #+#             */
/*   Updated: 2018/04/19 08:57:13 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *r;

	r = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			r = (char *)s;
		s++;
	}
	if (!c && !*s)
		r = (char *)s;
	return (r);
}
