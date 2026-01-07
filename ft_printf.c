/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 16:33:24 by glopes-a          #+#    #+#             */
/*   Updated: 2025/12/14 16:56:33 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put_type(va_list args, char c)
{
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
	if (c == 'p')
		return (ft_putptr(va_arg(args, void *)));
	if (c == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 'l'));
	if (c == 'X')
		return (ft_puthex(va_arg(args, unsigned int), 'u'));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, s);
	if (!s || s == 0)
		return (-1);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			if (*s != '%')
				count += put_type(args, *s);
			else
				count += ft_putchar(*s);
		}
		else
			count += ft_putchar(*s);
		s++;
	}
	va_end(args);
	return (count);
}
/*
#include <stdio.h>
int main()
{
	int n = 445;

	printf(" %i", printf("Ola %X", n));
	printf("\n");
	ft_printf(" %i", ft_printf("Ola %X", n));
	return (0);
}
*/
