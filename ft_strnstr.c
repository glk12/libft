/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 20:41:44 by glopes-a          #+#    #+#             */
/*   Updated: 2025/10/24 12:39:32 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*s_hay;

	s_hay = haystack;
	if (!needle)
		return ((char *) s_hay);
	while (*haystack && len--)
	{
		if (*needle == *haystack)
			needle++;
		haystack++;
	}
	if (*needle == '\0')
		return ((char *)s_hay);
	else
		return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    const char *text = "Hello, world!";
    const char *result = ft_strnstr(text, "world", 10);
    
    if (result)
        printf("Found: %s\n", result);
    else
        printf("Not found\n");

    return 0;
}
*/
