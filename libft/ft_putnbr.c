/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 14:39:43 by cbartoli          #+#    #+#             */
/*   Updated: 2017/08/10 15:14:47 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	char	number[11];
	int		index;

	index = 0;
	if (nb > 0)
		nb = -nb;
	else if (nb == 0)
		ft_putchar('0');
	else
		ft_putchar('-');
	while (nb < 0)
	{
		number[index] = -(nb % 10) + '0';
		nb = nb / 10;
		index++;
	}
	index--;
	while (index >= 0)
	{
		ft_putchar(number[index]);
		index--;
	}
}
