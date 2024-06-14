/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalissa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:41:54 by aalissa           #+#    #+#             */
/*   Updated: 2023/12/08 18:58:32 by aalissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long n, int base, int type)
{
	int		count;
	char	*sy1;
	char	*sy2;

	count = 0;
	sy1 = "0123456789abcdef";
	sy2 = "0123456789ABCDEF";
	if (n < 0)
	{
		count += write(1, "-", 1);
		return (count + ft_putnbr(-n, base, type));
	}
	else if (n < base)
	{
		if (type == 1)
			return (ft_putchar(sy1[n]));
		else
			return (ft_putchar(sy2[n]));
	}
	else if (n >= base)
	{
		count += ft_putnbr(n / base, base, type);
		return (count + ft_putnbr(n % base, base, type));
	}
	return (count);
}
