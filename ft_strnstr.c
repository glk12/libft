/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 20:41:44 by glopes-a          #+#    #+#             */
/*   Updated: 2025/10/25 10:48:27 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*t_haystack;
	const char	*t_needle;
	size_t		t_len;

	if (*needle == '\0')
		return ((char *) haystack);
	while (*haystack && len > 0)
	{
		t_haystack = haystack;
		t_needle = needle;
		t_len = len;
		while (*t_needle && *t_haystack == *t_needle && t_len > 0)
		{
			t_haystack++;
			t_needle++;
			t_len--;
		}
		if (*t_needle == '\0')
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
