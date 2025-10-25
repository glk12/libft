/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:35:20 by glopes-a          #+#    #+#             */
/*   Updated: 2025/10/24 20:48:31 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	b_zero(void *s, size_t n);

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size > (size_t)-1 / nmemb)
		return (NULL);
	ptr = (malloc(size * nmemb));
	if (ptr)
		ft_bzero (ptr,size * nmemb);
	return (ptr);
}
