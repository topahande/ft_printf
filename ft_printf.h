/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:14:13 by htopa             #+#    #+#             */
/*   Updated: 2024/05/27 17:53:58 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int					ft_printf(const char *format, ...);
size_t				ft_strlen(const char *s);
int					ft_putunsignednbr(unsigned int n);
int					ft_putunsignednbr_fd(unsigned int n, int fd);
int					ft_putstr(char *s);
int					ft_putstr_fd(char *s, int fd);
int					ft_putpointer(void *p);
int					ft_putpercent(void);
int					ft_putnbr(int c);
int					ft_putnbr_fd(int n, int fd);
unsigned long int	ft_putnbr_base(int n, char *base);
unsigned long int	ft_putnbr_base_pointer(unsigned long int nbr, char *base);
int					ft_puthexadecimal(unsigned int n, char *base);
int					ft_puthexadecimal_pointer(unsigned long int nbr,
						char *base);
int					ft_putchar(int c);
int					ft_putchar_fd(char c, int fd);

#endif
