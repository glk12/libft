/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:02:40 by glopes-a          #+#    #+#             */
/*   Updated: 2025/10/09 15:02:50 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return(c >= 0 && c <= 127);
}
/*
#include <ctype.h>
#include <stdio.h>

int     main()
{
        char chars[] = {'a','V','7',255};

        for(int i = 0; i <= 3; i++)
                printf("isascii: %d \n ft_isacii: %d\n",isascii(chars[i]),ft_isascii(chars[i]));
}
*/
