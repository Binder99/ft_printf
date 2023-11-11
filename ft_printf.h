/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbinder <tbinder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:33:32 by tbinder           #+#    #+#             */
/*   Updated: 2023/10/08 09:37:22 by tbinder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putnbr(int number);
int		ft_putstr(char *s);
int		ft_hexa(unsigned long number, int s);
int		ft_unsigned_int(unsigned int number);
//Handle
void	checkformat(char c, va_list pr, int *i);
void	handle_hex(char c, va_list pr, int *i);
void	handle_pointer(va_list pr, int *i);

#endif 	
