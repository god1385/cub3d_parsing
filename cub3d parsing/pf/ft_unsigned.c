/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:09:28 by hjanis            #+#    #+#             */
/*   Updated: 2022/10/24 17:43:33 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_numlen(long int n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		count += 1;
		n *= -1;
	}
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_unsigneditoa(unsigned int number)
{
	char	*a;
	int		l;

	l = ft_numlen(number);
	a = (char *)malloc(sizeof(char) * (l + 1));
	if (!a)
		return (NULL);
	a[l--] = '\0';
	if (number == 0)
		a[l] = 0 + '0';
	while (number > 0)
	{
		a[l--] = number % 10 + '0';
		number /= 10;
	}
	return (a);
}
