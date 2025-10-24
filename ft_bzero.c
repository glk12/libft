/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 20:35:47 by glopes-a          #+#    #+#             */
/*   Updated: 2025/10/24 11:11:22 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
		*p++ = '\0';
}
/*
#include <stdio.h>

int	main()
{
	char s[] = "Hello";

	printf("before: %s\n", s);
	
	ft_bzero(s,5);
	printf("after: %s", s);
	return 0;
}
*/
