/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <cbartoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 21:13:56 by cbartoli          #+#    #+#             */
/*   Updated: 2017/12/01 21:16:53 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int		ft_countw(char const *s, char c)
{
	int w;

	w = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			w++;
		while (*s != c && *s)
			s++;
	}
	return (w);
}

static char				**ft_wrdsal(char *s, char c, char **tab, int w)
{
	int	i;
	int	j;

	j = 0;
	while (*s)
	{
		i = 0;
		while (*s == c)
			s++;
		while (*s != c && *s)
		{
			s++;
			i++;
		}
		if (!(tab[j] = ft_strnew(i + 1)))
			return (NULL);
		j++;
	}
	if (j < w)
		tab[j] = ft_strnew(1);
	return (tab);
}

static char				**ft_tabfill(char const *s, char c, char **tab)
{
	int	i;
	int	j;

	j = 0;
	while (*s)
	{
		i = 0;
		while (*s == c)
			s++;
		while (*s != c && *s)
		{
			tab[j][i] = *s;
			s++;
			i++;
		}
		tab[j][i] = '\0';
		j++;
	}
	return (tab);
}

char					**ft_strsplit(char const *s, char c)
{
	int		wrds;
	char	**tab;

	if (!s || !c)
		return (NULL);
	wrds = ft_countw(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * wrds + 1)))
		return (NULL);
	if (!(tab = ft_wrdsal((char *)s, c, tab, wrds)))
		return (NULL);
	tab = ft_tabfill(s, c, tab);
	tab[wrds] = (char *)'\0';
	return (tab);
}
