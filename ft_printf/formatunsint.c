/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formatunsint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psenalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:06:29 by psenalia          #+#    #+#             */
/*   Updated: 2024/03/19 15:14:47 by psenalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsint(unsigned int n)
{
	int		process;
	char	c;

	process = 0;
	if (n >= 10)
	{
		process += print_unsint(n / 10);
		process += print_unsint(n % 10);
	}
	else
	{
		c = n + 48;
		process += write(1, &c, 1);
	}
	return (process);
}
