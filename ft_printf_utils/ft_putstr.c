/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 19:17:11 by glopes-a          #+#    #+#             */
/*   Updated: 2025/12/11 18:24:17 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	count;

	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	count = 0;
	while (*s)
	{
		write (1, s, 1);
		s++;
		count++;
	}
	return (count);
}
