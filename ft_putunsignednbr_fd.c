/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr_fd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:42:04 by htopa             #+#    #+#             */
/*   Updated: 2024/05/27 17:42:07 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsignednbr_fd(unsigned int n, int fd)
{
	if (n > 9)
		ft_putunsignednbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}
