/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalissa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:14:23 by aalissa           #+#    #+#             */
/*   Updated: 2023/12/08 19:20:03 by aalissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putptr(void *ptr);
int	ft_addresssan(void *ptr);
int	ft_putnbr(long n, int base, int type);
int	ft_print_format(char sp, va_list ap);
int	ft_printf(const char	*format, ...);

#endif
