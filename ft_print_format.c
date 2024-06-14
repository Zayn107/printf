/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalissa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:42:17 by aalissa           #+#    #+#             */
/*   Updated: 2023/12/07 19:37:11 by aalissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(char sp, va_list ap)
{
	int	count;

	count = 0;
	if (sp == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (sp == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (sp == 'p')
		count += ft_putptr(va_arg(ap, void *));
	else if ((sp == 'i') || (sp == 'd'))
		count += ft_putnbr((long)va_arg(ap, int), 10, 1);
	else if (sp == 'u')
		count += ft_putnbr((long)va_arg(ap, unsigned int), 10, 1);
	else if (sp == 'x')
		count += ft_putnbr((long)va_arg(ap, unsigned int), 16, 1);
	else if (sp == 'X')
		count += ft_putnbr((long)va_arg(ap, unsigned int), 16, 2);
	else if (sp == '%')
		count += ft_putchar('%');
	else
		count += write(1, &sp, 1);
	return (count);
}
