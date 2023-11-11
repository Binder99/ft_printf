/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbinder <tbinder@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:32:06 by tbinder           #+#    #+#             */
/*   Updated: 2023/10/10 11:38:43 by tbinder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int number)
{
	int	len;

	len = 0;
	if (number == -2147483648)
	{
		len += (ft_putstr("-2147483648"));
		return (len);
	}
	if (number < 0)
	{
		len += (ft_putchar('-'));
		number = -number;
	}
	if (number > 9)
	{
		len += (ft_putnbr(number / 10));
		len += (ft_putnbr(number % 10));
	}
	else
		len += (ft_putchar(number + 48));
	return (len);
}
