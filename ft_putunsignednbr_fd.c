/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr_fd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:42:04 by htopa             #+#    #+#             */
/*   Updated: 2024/05/27 17:42:07 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsignednbr_fd(unsigned int n)
{
	int	write_check;

	if (n > 9)
	{
		write_check = ft_putunsignednbr_fd(n / 10);
		if (write_check == -1)
			return (-1);
	}
	write_check = ft_putchar(n % 10 + '0');
	if (write_check == -1)
		return (-1);
	return (1);
}
