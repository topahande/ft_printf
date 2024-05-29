/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_positive.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:35:09 by htopa             #+#    #+#             */
/*   Updated: 2024/05/29 12:35:13 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_positive(int n)
{
	int	write_check;

	if (n > 9)
	{
		write_check = ft_putnbr_positive(n / 10);
		if (write_check == -1)
			return (-1);
	}
	write_check = ft_putchar(n % 10 + '0');
	if (write_check == -1)
		return (-1);
	return (1);
}
