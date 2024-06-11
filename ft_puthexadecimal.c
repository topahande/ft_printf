/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexadeciamal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:40:30 by htopa             #+#    #+#             */
/*   Updated: 2024/06/11 21:24:37 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexadecimal(unsigned long int n, char type)
{
	int		i;
	int		write_check;
	char	*base;

	if (type == 'x')
		base = "0123456789abcdef";
	if (type == 'X')
		base = "0123456789ABCDEF";
	write_check = ft_putnbr_base(n, base);
	if (write_check == -1)
		return (-1);
	i = 1;
	while (n >= 16)
	{
		n = n / 16;
		i++;
	}
	return (i);
}
