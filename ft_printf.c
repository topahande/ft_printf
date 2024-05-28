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

/*
#include <stdio.h>
int main(void)
{

	int *p;

	*p = 12;

	printf("%p\n", p);
	ft_putpointer(p);

	//printf("%X\n",-42);
	//ft_printf("%X\n",-42);
	//printf("%d", printf("%X",-42));
	printf("%u", ft_puthexadeciamal(-42, "0123456789abcdef"));
	//printf("%d", ft_printf("%X",-42));


	
	//printf("%d", printf(" %u ", -1));
	//printf("%d", printf(" %u ", -1));
	//printf("%c", '\n');
	printf("%d\n",printf("%u\n", -1));
	printf("%d\n",ft_putunsignednbr(-1));
	printf("%d\n",printf("%u\n", 1));
	printf("%d\n",ft_putunsignednbr(1));
	
	//printf("%d", ft_printf(" %u ", -1));

	printf("%d", printf(" NULL %s NULL ", NULL));
	printf("%d", ft_printf(" NULL %s NULL ", NULL));
	printf("%d", ft_putstr(NULL));
	printf("%d",ft_printf("%c\n", '0'));
	printf("%d",ft_printf(" %c \n", '0'));
	printf("%d",ft_printf(" %c\n", '0' - 256));
	printf("%d",ft_printf("%c \n", '0' + 256));
	printf("%d",ft_printf(" %c %c %c \n", '0', 0, '1'));
	printf("%d",ft_printf(" %c %c %c \n", ' ', ' ', ' '));
	printf("%d",ft_printf(" %c %c %c \n", '1', '2', '3'));
	printf("%d",ft_printf(" %c %c %c \n", '2', '1', 0));
	printf("%d",ft_printf(" %c %c %c \n", 0, '1', '2'));
	printf("%c", '\n');
	ft_printf("%c\n", '0');
	ft_printf(" %c \n", '0');
	ft_printf(" %c\n", '0' - 256);
	ft_printf("%c \n", '0' + 256);
	ft_printf(" %c %c %c \n", '0', 0, '1');
	ft_printf(" %c %c %c \n", ' ', ' ', ' ');
	ft_printf(" %c %c %c \n", '1', '2', '3');
	ft_printf(" %c %c %c \n", '2', '1', 0);
	ft_printf(" %c %c %c \n", 0, '1', '2');
	
	return (0);
}
*/
