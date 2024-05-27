/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_pointer.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:40:45 by htopa             #+#    #+#             */
/*   Updated: 2024/05/27 17:40:49 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned long int	ft_putnbr_base_pointer(unsigned long int nbr,
char *base)
{
	if (nbr >= 16)
		ft_putnbr_base_pointer(nbr / 16, base);
	write(1, &base[nbr % 16], 1);
	return (nbr);
}
