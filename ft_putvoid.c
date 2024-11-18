/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichakank <ichakank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:37:37 by ichakank          #+#    #+#             */
/*   Updated: 2024/11/15 19:11:40 by ichakank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putvoidd(unsigned long s)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	if (s >= 16)
	{
		count += ft_putvoidd(s / 16);
	}
	count += write(1, &base[s % 16], 1);
	return (count);
}

int	ft_putvoid(unsigned long s)
{
	int	count;

	count = 0;
	count += write(1, "0x", 2);
	count += ft_putvoidd(s);
	return (count);
}
