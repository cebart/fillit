/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <cbartoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 14:40:25 by cbartoli          #+#    #+#             */
/*   Updated: 2018/04/04 12:52:23 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_negativ(char c)
{
	int sign;

	sign = 1;
	if (c == '-')
		sign = -1;
	return (sign);
}

int			ft_atoi(const char *str)
{
	unsigned int sign;
	unsigned int result;

	result = 0;
	while (ft_isspace(*str))
		str++;
	sign = ft_is_negativ(*str);
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
