/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formatint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psenalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:46:12 by psenalia          #+#    #+#             */
/*   Updated: 2024/06/07 18:44:59 by psenalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int(int n)
{
	int		process;
	char	c;

	process = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		process += write(1, "-", 1);
		process += print_int(-n);
	}
	if (n >= 10)
	{
		process += print_int(n / 10);
		c = (n % 10) + 48;
		process += write(1, &c, 1);
	}
	else if (n < 10 && n >= 0)
	{
		c = n + 48;
		process += write(1, &c, 1);
	}
	return (process);
}
