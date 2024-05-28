/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:42:12 by htopa             #+#    #+#             */
/*   Updated: 2024/05/27 17:42:16 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsignednbr(int n)
{
	unsigned int	c;
	int				i;
	int				write_check;

	c = (unsigned int)n;
	write_check = ft_putunsignednbr_fd(c, 1);
	if (write_check == -1)
		return (-1);
	i = 1;
	while (c > 9)
	{
		c = c / 10;
		i++;
	}
	return (i);
}
