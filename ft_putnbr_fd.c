/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:41:04 by htopa             #+#    #+#             */
/*   Updated: 2024/05/27 17:41:07 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	int	write_check;

	if (n == -2147483648)
		return (write(fd, "-2147483648", 11));
	else
	{
		if (n < 0)
		{
			write_check = ft_putchar_fd('-', fd);
			if (write_check == -1)
				return (-1);
			n = -n;
		}
		if (n > 9)
		{
			write_check = ft_putnbr_fd(n / 10, fd);
			if (write_check == -1)
				return (-1);
		}
		write_check = ft_putchar_fd(n % 10 + '0', fd);
		if (write_check == -1)
			return (-1);
	}
	return (1);
}
