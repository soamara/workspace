/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 02:45:14 by soamara           #+#    #+#             */
/*   Updated: 2024/11/12 17:16:57 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *len)
{
	int	i;

	i = 0;
	if (!str)
	{
		return (ft_putstr("(null)", len));
	}
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
		(*len)++;
	}
}
