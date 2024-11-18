/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichakank <ichakank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:45:22 by ichakank          #+#    #+#             */
/*   Updated: 2024/11/15 18:45:44 by ichakank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	unsigned long	number;
	int				count;

	number = n;
	count = 0;
	if (number >= 10)
		count += ft_putnbr_u(number / 10);
	count += ft_putchar(number % 10 + '0');
	return (count);
}
