/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:41:42 by htopa             #+#    #+#             */
/*   Updated: 2024/05/27 17:41:46 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int	write_check;

	i = 0;
	while (s[i] != '\0')
	{
		write_check = write(fd, &s[i], 1);
		if (write_check == -1)
			return (-1);
		i++;
	}
	return (i);
}
