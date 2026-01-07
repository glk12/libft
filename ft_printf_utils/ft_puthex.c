/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 23:28:12 by glopes-a          #+#    #+#             */
/*   Updated: 2025/12/14 15:52:25 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, char c)
{
	char			*base;
	unsigned long	mod;
	int				aux;
	int				len;

	len = 0;
	if (c == 'u')
		base = "0123456789ABCDEF";
	else if (c == 'l')
		base = "0123456789abcdef";
	if (n == 0)
		return (ft_putchar('0'));
	if (n > 15)
	{
		aux = ft_puthex(n / 16, c);
		len += aux;
	}
	mod = n % 16;
	if (write(1, &base[mod], 1) == -1)
		return (-1);
	len += 1;
	return (len);
}
