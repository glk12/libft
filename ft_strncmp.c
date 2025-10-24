/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:16:47 by glopes-a          #+#    #+#             */
/*   Updated: 2025/10/23 12:37:42 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n-- && *s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>
#include <string.h>
int	main(int argc , char **argv)
{
	size_t	n = 3;
	(void)argc;
	printf("%s","MINE: ");
	printf("%d\n", ft_strncmp(argv[1],argv[2],n));
	printf("%s","EXPECTED: ");
	printf("%d", strncmp(argv[1],argv[2],n));
}
*/	
