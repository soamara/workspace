/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrxmaj.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:28:27 by soamara           #+#    #+#             */
/*   Updated: 2024/11/12 18:13:31 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrxmaj(unsigned int nb, int *len)
{
	if (nb == 0)
	{
		ft_putchar('0', len);
		return ;
	}
	if (nb >= 16)
	{
		ft_putnbrxmaj((nb / 16), len);
		ft_putnbrxmaj((nb % 16), len);
	}
	else if (nb < 10)
		ft_putchar(nb + '0', len);
	else
		ft_putchar(((nb - 10) + 'A'), len);
}
