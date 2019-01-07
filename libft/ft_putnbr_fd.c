/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbartoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 14:39:43 by cbartoli          #+#    #+#             */
/*   Updated: 2017/12/01 19:29:47 by cbartoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char	number[11];
	int		index;

	index = 0;
	if (nb > 0)
		nb = -nb;
	else if (nb == 0)
		ft_putchar_fd('0', fd);
	else
		ft_putchar_fd('-', fd);
	while (nb < 0)
	{
		number[index] = -(nb % 10) + '0';
		nb = nb / 10;
		index++;
	}
	index--;
	while (index >= 0)
	{
		ft_putchar_fd(number[index], fd);
		index--;
	}
}
