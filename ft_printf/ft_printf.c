/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psenalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:29:35 by psenalia          #+#    #+#             */
/*   Updated: 2024/03/22 12:41:14 by psenalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printformat(char c, va_list arg)
{
	int	process;

	process = 0;
	if (c == 'c')
		process += print_char(va_arg(arg, int));
	else if (c == 's')
		process += print_string(va_arg(arg, char *));
	else if (c == 'p')
		process += print_pointer(va_arg(arg, void *));
	else if (c == 'd' || c == 'i')
		process += print_int(va_arg(arg, int));
	else if (c == 'u')
		process += print_unsint(va_arg(arg, unsigned int));
	else if (c == 'x')
		process += print_hex(va_arg(arg, unsigned int), 0);
	else if (c == 'X')
		process += print_hex(va_arg(arg, unsigned int), 1);
	return (process);
}

int	ft_printf(const char *format, ...)
{
	va_list			arg;
	unsigned int	len;
	int				progress;

	progress = 0;
	len = 0;
	va_start(arg, format);
	while (format[len])
	{
		if (format[len] == '%')
		{
			len++;
			if (format[len] == '%')
				progress += write(1, &format[len], 1);
			else if (format[len] != '\0')
				progress += printformat(format[len], arg);
		}
		else
			progress += write(1, &format[len], 1);
		len++;
	}
	va_end(arg);
	return (progress);
}
