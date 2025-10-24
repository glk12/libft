/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 20:37:25 by glopes-a          #+#    #+#             */
/*   Updated: 2025/10/24 12:38:12 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t len)
{
	unsigned char	*p;

	p = ptr;
	while (len--)
		*p++ = (unsigned char)value;
	return (ptr);
}
/*
#include <stdio.h>
int main()
{
	int arr[6] ={4,5,6};

	ft_memset(arr,'A', sizeof(arr));

	for(int i = 0;i<6;i++)
		printf("%d", arr[i]);
}
*/
