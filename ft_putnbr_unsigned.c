/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 23:33:58 by soamara           #+#    #+#             */
/*   Updated: 2024/11/12 17:44:32 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int nb, int *len)
{
	if (nb == 0)
	{
		ft_putchar('0', len);
		return ;
	}
	if (nb > 9)
	{
		ft_putnbr((nb / 10), len);
	}
	ft_putchar(nb % 10 + '0', len);
}
