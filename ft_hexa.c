/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbinder <tbinder@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:31:42 by tbinder           #+#    #+#             */
/*   Updated: 2023/10/10 11:38:13 by tbinder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned long number, int s)
{
	int	len;

	len = 0;
	if (number == 0)
	{
		len += ft_putchar('0');
		return (len);
	}
	if (number >= 16)
	{
		len += ft_hexa(number / 16, s);
	}
	if (number % 16 < 10)
	{
		len += ft_putchar((number % 16) + 48);
	}
	else
	{
		if (s == 1)
			len += ft_putchar((number % 16) + 87);
		else
			len += ft_putchar((number % 16) + 55);
	}
	return (len);
}
