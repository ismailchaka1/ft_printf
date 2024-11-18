/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichakank <ichakank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:38:05 by ichakank          #+#    #+#             */
/*   Updated: 2024/11/15 18:45:02 by ichakank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	number;
	int		count;

	number = n;
	count = 0;
	if (number < 0)
	{
		number *= -1;
		count += write(1, "-", 1);
	}
	if (number >= 10)
		count += ft_putnbr(number / 10);
	count += ft_putchar(number % 10 + '0');
	return (count);
}
