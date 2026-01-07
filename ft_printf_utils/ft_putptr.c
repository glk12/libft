/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 17:26:23 by glopes-a          #+#    #+#             */
/*   Updated: 2025/12/11 18:24:38 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	len;
	int	hexlen;

	len = 0;
	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	if (ft_putstr("0x") == -1)
		return (-1);
	len += 2;
	hexlen = ft_puthex((unsigned long) ptr, 'l');
	if (hexlen < 0)
		return (-1);
	len += hexlen;
	return (len);
}
