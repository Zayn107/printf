/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalissa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:41:34 by aalissa           #+#    #+#             */
/*   Updated: 2023/12/08 19:00:19 by aalissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	count;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	count = 0;
	while (*str)
	{
		count += ft_putchar((int)*str);
		++str;
	}
	return (count);
}
