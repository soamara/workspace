/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 02:27:02 by soamara           #+#    #+#             */
/*   Updated: 2024/11/12 17:38:17 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print(const char *str, size_t i, va_list args, int *len)
{
	if (str[i] == 'p')
		print_putnbr_p(va_arg(args, unsigned long long), len);
	else if (str[i] == 'x')
		ft_putnbrx(va_arg(args, unsigned int), len);
	else if (str[i] == 'X')
		ft_putnbrxmaj(va_arg(args, unsigned int), len);
	else if (str[i] == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (str[i] == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (str[i] == 'i' || str[i] == 'd')
		ft_putnbr(va_arg(args, int), len);
	else if (str[i] == 'u')
		ft_putnbr_unsigned(va_arg(args, unsigned int), len);
	else if (str[i] == '%')
		ft_putchar('%', len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;
	int		i;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			print(str, i, args, &len);
			i++;
		}
		else
		{
			ft_putchar(str[i], &len);
			i++;
		}
	}
	va_end(args);
	return (len);
}
