/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:00:46 by glopes-a          #+#    #+#             */
/*   Updated: 2025/10/20 18:49:43 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	d_len = 0;
	while (d_len < n && dest[d_len])
		d_len++;
	s_len = ft_strlen(src);
	if (d_len == n)
		return (n + s_len);
	if (n > d_len + s_len)
	{
		i = 0;
		while (src[i])
		{
			dest[d_len + i] = src[i];
			i++;
		}
		dest[d_len + i] = '\0';
	}
	else
	{
		i = 0;
		while (i < n - d_len - 1 && src[i])
		{
			dest[d_len + i] = src[i];
			i++;
		}
		dest[d_len + i] = '\0';
	}
	return (d_len + s_len);
}
#include <stdio.h>

int	main()
{	
	char buf[10] = "Hello";
	const char *src = "World";
	int n = 10;
	ft_strlcat(buf,src,n);
	printf("%s",buf);
}
