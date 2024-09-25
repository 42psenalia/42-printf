/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formatpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psenalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:45:46 by psenalia          #+#    #+#             */
/*   Updated: 2024/03/19 15:57:33 by psenalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(void *p)
{
	int	process;

	process = 0;
	if (!p)
		return (process += write(1, "(nil)", 5));
	process += write(1, "0x", 2);
	process += print_hex((unsigned long)p, 0);
	return (process);
}
