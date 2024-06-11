/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:14:13 by htopa             #+#    #+#             */
/*   Updated: 2024/06/11 13:57:55 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int	ft_printf(const char *format, ...);
int	ft_putunsignednbr(unsigned int n);
int	ft_putunsignednbr_check(unsigned int n);
int	ft_putstr(char *s);
int	ft_putpointer(void *p);
int	ft_putpercent(void);
int	ft_putnbr(int c);
int	ft_putnbr_positive(int n);
int	ft_putnbr_base(unsigned long int n, char *base);
int	ft_puthexadecimal(unsigned long int n, char *base);
int	ft_putchar(int c);

#endif
