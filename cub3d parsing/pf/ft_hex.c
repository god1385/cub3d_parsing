/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:01:10 by hjanis            #+#    #+#             */
/*   Updated: 2022/10/24 17:43:59 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_hex(t_print *tab, char c)
{
	unsigned int	n;
	int				l;
	unsigned int	i;

	i = 16;
	n = va_arg(tab->args, unsigned int);
	l = ft_numlenbase(n, i);
	while (i <= n && i < 268435456)
	{
		i *= 16;
		tab->wdt = tab->wdt - 1;
	}
	while (tab->wdt-- > l)
		tab->length += write(1, " ", 1);
	if (c == 'x')
		tab->length += ft_putnbr_base(n, "0123456789abcdef");
	if (c == 'X')
		tab->length += ft_putnbr_base(n, "0123456789ABCDEF");
}
