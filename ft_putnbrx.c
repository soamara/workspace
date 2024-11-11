/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:56:44 by soamara           #+#    #+#             */
/*   Updated: 2024/11/10 23:50:36 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putnbrx(unsigned int nb, int *i)
{
    
    if(nb >= 16)
    {
        ft_putnbrx((nb / 16), i);
        ft_putnbrx((nb % 16), i);
    }
    else
    {
        if(nb < 10)
            ft_putchar(nb + '0', i);
        else
            ft_putchar((nb - 10 + 'a'), i);
    }
}