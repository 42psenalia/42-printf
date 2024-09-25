/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formatstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psenalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:24:04 by psenalia          #+#    #+#             */
/*   Updated: 2024/03/19 14:42:27 by psenalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_string(char *s)
{
	int	process;

	process = 0;
	if (!s)
		s = "(null)";
	while (*s)
		process += write(1, s++, 1);
	return (process);
}
