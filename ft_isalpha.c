/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 20:36:23 by glopes-a          #+#    #+#             */
/*   Updated: 2025/10/24 11:52:20 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*
#include <ctype.h>
#include <stdio.h>

int	main()
{
	char	c1 = 'h';
	char	c2 = '1';
	char	c3 = 1;
	char	c4 = ' ';
	
	if(isalpha(c1) != 0 && ft_isalpha(c1) != 0)
		write(1,"PASSED\n",7);
	else
		write(1,"FAILED\n",7);
	if(isalpha(c2) == ft_isalpha(c2))
		write(1,"PASSED\n",7);
	else
		write(1,"FAILED\n",7);
	if(isalpha(c3) == ft_isalpha(c3))
		write(1,"PASSED\n",7);
	else
		write(1,"FAILED\n",7);
	if(isalpha(c4) == ft_isalpha(c4))
		write(1,"PASSED\n",7);
	else
		write(1,"FAILED\n",7);


}
*/
