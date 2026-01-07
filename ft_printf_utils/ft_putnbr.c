/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 19:41:55 by glopes-a          #+#    #+#             */
/*   Updated: 2025/11/27 18:28:06 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	num;
	char	c;
	int		count;

	count = 0;
	num = n;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
		count++;
	}
	if (num >= 10)
	{
		count += ft_putnbr(num / 10);
		num = num % 10;
	}
	count++;
	c = num + '0';
	write(1, &c, 1);
	return (count);
}
