/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_putnbr_p.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:47:13 by soamara           #+#    #+#             */
/*   Updated: 2024/11/12 17:17:37 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_p(unsigned long long nb, int *len)
{
	if (nb >= 16)
	{
		ft_putnbr_p((nb / 16), len);
		ft_putnbr_p((nb % 16), len);
	}
	else
	{
		ft_putchar(BASE16[nb], len);
	}
}

void	print_putnbr_p(unsigned long long ptr, int *len)
{
	if (!ptr)
	{
		ft_putstr("(nil)", len);
		return ;
	}
	else
	{
		ft_putstr(("0x"), len);
		ft_putnbr_p((ptr), len);
	}
}
