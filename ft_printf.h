/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichakank <ichakank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:24:04 by ichakank          #+#    #+#             */
/*   Updated: 2024/11/15 19:17:54 by ichakank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putvoidd(unsigned long s);
int	ft_putvoid(unsigned long s);
int	ft_putnbr(int n);
int	ft_putnbr_u(unsigned int n);
int	ft_puthexa_u(unsigned int n);
int	ft_puthexa_upper(unsigned int n);
int	ft_print_format(va_list args, char c);

#endif