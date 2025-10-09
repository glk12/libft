/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 20:31:29 by glopes-a          #+#    #+#             */
/*   Updated: 2025/10/09 20:32:54 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;

	d = dest;
	s = src;
	while(n--)
		*d++ = *s++;
}
/*
#include <stdio.h>
int	main()
{
	char *src = "Hello";
	char dest[] = "World World";

	ft_memcpy(dest,src,5);
		printf("%s", dest);
}
*/
