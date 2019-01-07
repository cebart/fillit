/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <cbartoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 19:43:31 by cbartoli          #+#    #+#             */
/*   Updated: 2017/12/01 19:44:21 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *sr;

	if (!s1 || !s2 ||
		!(sr = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	sr = ft_strcpy(sr, s1);
	sr = ft_strcat(sr, s2);
	return (sr);
}
