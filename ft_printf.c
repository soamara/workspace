/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 02:27:02 by soamara           #+#    #+#             */
/*   Updated: 2024/11/10 23:50:18 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_printf(const char *str,va_list args, int *i, ...)
{
    if (*str == '%' && (str + 1))
    {
        if (*str == 'c' )
            ft_printchar(va_arg(args, char),i);
        if (*str == 's')
            ft_prints(va_arg(args, char *), i);
        if (str == 'p')
        
        if (str == 'i' str == 'd')
            ft_putnbr(va_arg(args, int), i);
        if (str == 'u')
            ft_putnbr_unsigned(va_arg(args, unsigned int), i);
        if (str == 'x')
            ft_putnbrx(va_arg(args, unsigned int), i);
        if (str == 'X')
            ft_putnbrx(va_arg(args, unsigned int), i);
        if (str == '%')
            ft_printchar(va_arg(args, char), i);
    }

}