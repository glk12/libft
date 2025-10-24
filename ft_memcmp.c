/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:36:38 by glopes-a          #+#    #+#             */
/*   Updated: 2025/10/24 11:28:59 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ss1;
	const unsigned char	*ss2;

	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[] = "abcdef";
    char b[] = "abcdeg";
    char c[] = "abcdef";

    // Teste 1:
    printf("Teste 1:\n");
    printf("Original: %d\n", memcmp(b, a, 6));
    printf("ft_memcmp: %d\n\n", ft_memcmp(b, a, 6));

    // Teste 2: 
    printf("Teste 2:\n");
    printf("Original: %d\n", memcmp(a, c, 6));
    printf("ft_memcmp: %d\n\n", ft_memcmp(a, c, 6));

    // Teste 3: 
    printf("Teste 3:\n");
    printf("Original: %d\n", memcmp(a, b, 6));
    printf("ft_memcmp: %d\n\n", ft_memcmp(a, b, 6));

    return 0;
}
*/
