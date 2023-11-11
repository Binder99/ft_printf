/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkformat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbinder <tbinder@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:01:24 by tbinder           #+#    #+#             */
/*   Updated: 2023/10/10 11:37:03 by tbinder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	checkformat(char c, va_list pr, int *i)
{
	if (c == '%')
		(*i) += ft_putchar('%');
	else if (c == 'd' || c == 'i')
		(*i) += ft_putnbr(va_arg(pr, int));
	else if (c == 'c')
		(*i) += ft_putchar(va_arg(pr, int));
	else if (c == 's')
		(*i) += ft_putstr(va_arg(pr, char *));
	else if (c == 'x' || c == 'X')
		handle_hex(c, pr, i);
	else if (c == 'p')
		handle_pointer(pr, i);
	else if (c == 'u')
		(*i) += ft_unsigned_int(va_arg(pr, unsigned int));
	else
		(*i) += ft_putchar(c);
}

void	handle_hex(char c, va_list pr, int *i)
{
	if (c == 'x')
		(*i) += ft_hexa(va_arg(pr, unsigned int), 1);
	else
		(*i) += ft_hexa(va_arg(pr, unsigned int), 0);
}

void	handle_pointer(va_list pr, int *i)
{
	unsigned long	ptr;

	ptr = va_arg(pr, unsigned long);
	if (ptr == 0)
		(*i) += ft_putstr("(nil)");
	else
	{
		ft_putstr("0x");
		(*i) += 2;
		(*i) += ft_hexa(ptr, 1);
	}
}
