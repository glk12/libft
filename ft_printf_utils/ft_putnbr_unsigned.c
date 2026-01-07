/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 15:48:11 by glopes-a          #+#    #+#             */
/*   Updated: 2025/12/14 15:55:00 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n)
{
	long	num;
	char	c;
	int		count;

	count = 0;
	num = n;
	if (num == 0)
		return (write(1, "0", 1));
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
