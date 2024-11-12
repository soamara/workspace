/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 06:58:07 by soamara           #+#    #+#             */
/*   Updated: 2024/11/12 17:28:18 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define BASE16 "0123456789abcdef"

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *len);
void	ft_putstr(char *str, int *len);
void	ft_putnbrx(unsigned int nb, int *len);
void	ft_putnbrxmaj(unsigned int nb, int *len);
void	ft_putnbr_unsigned(unsigned int nb, int *len);
void	ft_putnbr(int nb, int *len);
void	print_putnbr_p(unsigned long long ptr, int *len);

#endif
