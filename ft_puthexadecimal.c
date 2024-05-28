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

int	ft_puthexadecimal(int n, char *base)
{
	int				i;
	unsigned int	nbr;

	nbr = (unsigned int)ft_putnbr_base(n, base);
	if (nbr == (unsigned int)(-1))
		return (-1);
	i = 1;
	while (nbr >= 16)
	{
		nbr = nbr / 16;
		i++;
	}
	return (i);
}
