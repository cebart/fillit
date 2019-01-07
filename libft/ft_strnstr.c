/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <cbartoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:56:10 by cbartoli          #+#    #+#             */
/*   Updated: 2017/04/18 21:12:37 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	char	*j;
	char	*k;

	i = 0;
	if (!*to_find)
		return ((char *)str);
	while (str[i] && len--)
	{
		if (*str == *to_find)
		{
			i = len;
			j = (char *)str + 1;
			k = (char *)to_find + 1;
			while (i-- && *j && *k && *j == *k)
			{
				j++;
				k++;
			}
			if (!*k)
				return ((char *)str);
		}
		str++;
	}
	return (NULL);
}
