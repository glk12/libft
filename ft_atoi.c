/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:08:51 by glopes-a          #+#    #+#             */
/*   Updated: 2025/10/24 12:17:56 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *ptr)
{
	long long	val;
	int			sign;

	sign = 1;
	while (*ptr >= 7 && *ptr <= 32)
		ptr++;
	while (*ptr == '+' || *ptr == '-')
	{
		if (*ptr == '-')
			sign *= -1;
		ptr++;
	}
	while (*ptr && *ptr >= '0' && *ptr <= '9')
	{
		val = val * 10 + (*ptr - '0');
		ptr++;
	}
	return ((int)val * sign);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_atoi(argv[1]));
}
*/
