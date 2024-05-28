/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:41:32 by htopa             #+#    #+#             */
/*   Updated: 2024/05/27 17:41:35 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(void *p)
{
	int	write_check;

	write_check = write(1, "0x", 2);
	if (write_check == -1)
		return (-1);
	write_check = ft_puthexadecimal_pointer((unsigned long int)p,
			"0123456789abcdef");
	if (write_check == -1)
		return (-1);
	return (write_check + 2);
}
