/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:38:12 by glopes-a          #+#    #+#             */
/*   Updated: 2025/10/29 16:06:46 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	last;
	size_t	first;

	if (!s1 || !set)
		return (NULL);
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
