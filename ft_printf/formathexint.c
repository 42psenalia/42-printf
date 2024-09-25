/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formathexint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psenalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:17:07 by psenalia          #+#    #+#             */
/*   Updated: 2024/03/19 15:57:46 by psenalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned long n, int i)
{
	int		process;
	char	*hexup;
	char	*hexlo;

	hexup = "0123456789ABCDEF";
	hexlo = "0123456789abcdef";
	process = 0;
	if (n >= 16)
	{
		process += print_hex(n / 16, i);
		process += print_hex(n % 16, i);
	}
	else if (i == 1)
	{
		n %= 16;
		process += write(1, &hexup[n], 1);
	}
	else if (i == 0)
	{
		n %= 16;
		process += write(1, &hexlo[n], 1);
	}
	return (process);
}
