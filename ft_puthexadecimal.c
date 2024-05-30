/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexadeciamal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:40:30 by htopa             #+#    #+#             */
/*   Updated: 2024/05/27 17:48:21 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexadecimal(unsigned long int n, char *base)
{
	int	i;
	int	write_check;

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
