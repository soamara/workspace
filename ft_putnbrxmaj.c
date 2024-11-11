/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrxmaj.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:23:10 by soamara           #+#    #+#             */
/*   Updated: 2024/11/10 23:50:36 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putnbrxmaj(unsigned int nb, int *i)
{
    
    if(nb >= 16)
    {
        ft_putnbrmax((nb / 16), i);
        ft_putnbrmax((nb % 16), i);
    }
    else
    {
        if(nb < 10)
            ft_putchar(nb + '0', i);
        else
            ft_putchar((nb - 10 + 'A'), i);
    }
}