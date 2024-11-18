/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_upper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichakank <ichakank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:39:29 by ichakank          #+#    #+#             */
/*   Updated: 2024/11/15 19:17:58 by ichakank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_upper(unsigned int n)
{
	int		count;
	char	*base;

	base = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
		count += ft_puthexa_upper(n / 16);
	count += write(1, &base[n % 16], 1);
	return (count);
}
