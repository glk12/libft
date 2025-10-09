/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 20:33:03 by glopes-a          #+#    #+#             */
/*   Updated: 2025/10/09 20:33:14 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main()
{
	char chars[] = {'a','V','7',127};

	for(int i = 0; i <= 3; i++)
		printf("isprint: %d \n ft_isprint: %d\n",isprint(chars[i]),ft_isprint(chars[i]));
}
*/
