/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psenalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:58:44 by psenalia          #+#    #+#             */
/*   Updated: 2024/04/02 14:37:27 by psenalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <limits.h>

int	ft_printf(const char *format, ...);
int	printformat(char c, va_list ap);
int	print_char(char c);
int	print_string(char *s);
int	print_pointer(void *p);
int	print_int(int n);
int	print_unsint(unsigned int n);
int	print_hex(unsigned long n, int i);

#endif
