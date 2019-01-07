/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <cbartoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:32:52 by cbartoli          #+#    #+#             */
/*   Updated: 2017/12/01 19:06:47 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_stalloc(long n, long *l)
{
	char	*s;
	long	nb;

	nb = n;
	while (nb)
	{
		nb = nb / 10;
		(*l)++;
	}
	if (!n)
		*l = 1;
	if (n < 0)
		(*l)++;
	if (!(s = ft_strnew((size_t)*l)))
		return (NULL);
	return (s);
}

static char	*ft_strfill(long n2, long *l, char *s)
{
	while (n2)
	{
		s[*l] = (n2 % 10) + '0';
		n2 = n2 / 10;
		(*l)--;
	}
	return (s);
}

char		*ft_itoa(int n)
{
	char	*s;
	long	l;
	long	*ptrl;
	long	ne;
	long	n2;

	n2 = n;
	l = 0;
	ne = 0;
	ptrl = &l;
	if (!(s = ft_stalloc(n2, ptrl)))
		return (NULL);
	s[l--] = '\0';
	if (n2 < 0)
	{
		ne = 1;
		n2 = -n2;
	}
	s = ft_strfill(n2, ptrl, s);
	if (!*s)
		*s = '0';
	if (ne)
		s[l] = '-';
	return (s);
}
