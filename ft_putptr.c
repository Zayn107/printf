/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalissa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:47:39 by aalissa           #+#    #+#             */
/*   Updated: 2023/12/08 19:22:46 by aalissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int		count;
	char	*str;

	count = 0;
	str = "0x";
	count += ft_addresssan(ptr);
	if (count == 0)
	{
		count += ft_putstr(str);
		count += ft_putnbr((long)ptr, 16, 1);
	}
	return (count);
}
