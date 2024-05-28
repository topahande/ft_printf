/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:41:14 by htopa             #+#    #+#             */
/*   Updated: 2024/05/27 17:41:17 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int c)
{
	int	i;
	int	write_check;

	if (c == -2147483648)
		return (ft_putnbr_fd(c, 1));
	write_check = ft_putnbr_fd(c, 1);
	if (write_check == -1)
		return (-1);
	if (c < 0)
	{
		i = 2;
		c = (-c);
	}
	else
		i = 1;
	while (c > 9)
	{
		c = c / 10;
		i++;
	}
	return (i);
}
