/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichakank <ichakank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:25:04 by ichakank          #+#    #+#             */
/*   Updated: 2024/11/18 20:45:24 by ichakank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(va_list args, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar((char)va_arg(args, int));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (c == 'p')
		count += ft_putvoid(va_arg(args, unsigned long));
	else if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (c == 'x')
		count += ft_puthexa_u(va_arg(args, unsigned int));
	else if (c == 'X')
		count += ft_puthexa_upper(va_arg(args, unsigned int));
	else if (c == 'u')
		count += ft_putnbr_u(va_arg(args, unsigned int));
	else if (c == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		count;
	int		i;

	count = 0;
	i = 0;
	if (!s || write(1, "", 0) == -1)
		return (-1);
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
			count += ft_print_format(args, s[++i]);
		else
			count += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (count);
}
