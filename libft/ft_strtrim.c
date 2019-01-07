/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <cbartoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 11:17:09 by cbartoli          #+#    #+#             */
/*   Updated: 2018/04/04 12:51:51 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		start;
	int		len;
	int		end;
	char	*sr;

	len = 0;
	start = 0;
	if (!s)
		return (NULL);
	end = (ft_strlen(s) - 1);
	while (ft_isspace(s[end]))
	{
		len++;
		end--;
	}
	if (!(sr = ft_strnew(len - 1)))
		return (NULL);
	if (end < 0)
		return (sr);
	while (ft_isspace(s[start]))
		start++;
	len = ft_strlen(s) - start - len;
	sr = ft_strsub(s, start, (size_t)len);
	return (sr);
}
