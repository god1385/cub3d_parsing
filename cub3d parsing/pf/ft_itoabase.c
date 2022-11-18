/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:13:47 by hjanis            #+#    #+#             */
/*   Updated: 2022/10/24 17:43:49 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_numlenbase(unsigned int n, int base)
{
	int ret;

	ret = 1;
	if (n < 0)
		ret++;
	while (n / base != 0)
	{
		n /= base;
		ret++;
	}
	return (ret);
}

char	*ft_itoa_base(char *str, unsigned long n, int base, int c)
{
	int		i;

	i = 0;
	if (n == 0)
		str[i++] = '0';
	while (n > 0)
	{
		if (base > 10 && (n % base >= 10))
			str[i++] = (n % base) - 10 + c;
		else
			str[i++] = (n % base) + '0';
		n /= base;
	}
	str[i] = '\0';
	return (str);
}
