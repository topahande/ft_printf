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
	int	i;

	write(1, "0x", 2);
	i = ft_puthexadecimal_pointer((unsigned long int)p, "0123456789abcdef");
	return (i + 2);
}
