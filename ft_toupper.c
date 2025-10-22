/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:28:04 by glopes-a          #+#    #+#             */
/*   Updated: 2025/10/22 13:35:06 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
int main(int argc, char **argv)
{
	(void)argc;
	char x = (char)ft_toupper(argv[1][0]);
	write(1,&x,1);
	return (0);
}
*/
