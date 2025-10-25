/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:38:12 by glopes-a          #+#    #+#             */
/*   Updated: 2025/10/25 14:45:03 by gustavo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s);

size_t	ft_strlen(const char *s);

char	*ft_strchr(const char *s, int c);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	last;
	size_t	first;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(""));
	last = ft_strlen(s1);
	first = 0;
	while (s1[first] && ft_strchr(set, s1[first]))
		first++;
	while (last > first && ft_strchr(set, s1[last - 1]))
		last--;
	if (first == last)
		return (ft_strdup(""));
	return (ft_substr(s1, first, last - first));
}
