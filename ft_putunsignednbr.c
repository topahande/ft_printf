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

	c = (unsigned int)n;
	ft_putunsignednbr_fd(c, 1);
	i = 1;
	while (c > 9)
	{
		c = c / 10;
		i++;
	}
	return (i);
}
