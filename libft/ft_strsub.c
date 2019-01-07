/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <cbartoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 21:11:18 by cbartoli          #+#    #+#             */
/*   Updated: 2017/12/01 21:11:33 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *sr;

	if (!s || !(sr = ft_strnew(len)))
		return (NULL);
	while (start--)
		s++;
	sr = ft_strncpy(sr, s, len);
	sr[len] = '\0';
	return (sr);
}
