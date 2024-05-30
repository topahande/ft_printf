/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:40:54 by htopa             #+#    #+#             */
/*   Updated: 2024/05/27 17:40:58 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long int n, char *base)
{
	int	write_check;

	if (n >= 16)
	{
		write_check = ft_putnbr_base(n / 16, base);
		if (write_check == -1)
			return (-1);
	}
	write_check = write(1, &base[n % 16], 1);
	if (write_check == -1)
		return (-1);
	return (1);
}

/*
unsigned long int	ft_putnbr_base(int n, char *base)
{
	unsigned long int	nbr;
	unsigned long int	write_check;

	nbr = (unsigned long int)n;
	if (nbr >= 16)
	{
		write_check = ft_putnbr_base(nbr / 16, base);
		if (write_check == (unsigned long int)(-1))
			return ((unsigned long int)(-1));
	}
	write_check = write(1, &base[nbr % 16], 1);
	if (write_check == (unsigned long int)(-1))
		return ((unsigned long int)(-1));
	return (nbr);
}
*/
