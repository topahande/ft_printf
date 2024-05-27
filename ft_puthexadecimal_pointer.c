/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexadeciamal_pointer.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:40:20 by htopa             #+#    #+#             */
/*   Updated: 2024/05/27 17:48:31 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexadecimal_pointer(unsigned long int nbr, char *base)
{
	int				i;

	nbr = ft_putnbr_base_pointer(nbr, base);
	i = 1;
	while (nbr >= 16)
	{
		nbr = nbr / 16;
		i++;
	}
	return (i);
}
