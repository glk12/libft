/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:14:06 by glopes-a          #+#    #+#             */
/*   Updated: 2025/10/24 11:24:50 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s1[i] == (unsigned char) c)
			return ((void *)&s1[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main(void)
{
    char str[] = "Exemplo de teste";
    char *res = ft_memchr(str, 't', 15);

    if (res)
        printf("Encontrado: %s\n", res);
    else
        printf("Caractere não encontrado.\n");

    return 0;
}
*/
