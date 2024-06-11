/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:04:50 by htopa             #+#    #+#             */
/*   Updated: 2024/05/27 15:48:56 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_formatted(const char *format, va_list args)
{
	int	count;

	if (*format == 'd' || *format == 'i')
		count = ft_putnbr(va_arg(args, int));
	if (*format == 'c')
		count = ft_putchar(va_arg(args, int));
	if (*format == 's')
		count = ft_putstr(va_arg(args, char *));
	if (*format == '%')
		count = ft_putpercent();
	if (*format == 'u')
		count = ft_putunsignednbr(va_arg(args, unsigned int));
	if (*format == 'X')
		count = ft_puthexadecimal(va_arg(args, unsigned int),
				"0123456789ABCDEF");
	if (*format == 'x')
		count = ft_puthexadecimal(va_arg(args, unsigned int),
				"0123456789abcdef");
	if (*format == 'p')
		count = ft_putpointer(va_arg(args, void *));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		check_write;

	count = 0;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			check_write = print_formatted(format, args);
		}
		else
			check_write = ft_putchar(*format);
		if (check_write == -1)
			return (-1);
		count = count + check_write;
		format++;
	}
	va_end(args);
	return (count);
}
