/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbinder <tbinder@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:32:49 by tbinder           #+#    #+#             */
/*   Updated: 2023/10/08 09:29:12 by tbinder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_int(unsigned int number)
{
	int	len;

	len = 0;
	if (number > 9)
	{
		len += (ft_unsigned_int(number / 10));
		len += (ft_unsigned_int(number % 10));
	}
	else
		len += (ft_putchar(number + 48));
	return (len);
}
