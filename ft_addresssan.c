/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addresssan.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalissa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:08:17 by aalissa           #+#    #+#             */
/*   Updated: 2023/12/08 19:20:46 by aalissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_addresssan(void *ptr)
{
	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	else if (ptr == (void *)-1)
	{
		write (1, "0xffffffffffffffff", 18);
		return (18);
	}
	else if (ptr == (void *) LONG_MAX)
	{
		write (1, "0x7fffffffffffffff", 18);
		return (18);
	}
	else if (ptr == (void *) LONG_MIN)
	{
		write (1, "0x8000000000000000", 18);
		return (18);
	}
	return (0);
}
