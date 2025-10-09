/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 20:36:42 by glopes-a          #+#    #+#             */
/*   Updated: 2025/10/09 20:36:50 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
#include <ctype.h>

int	main()
{
	char c1 = '1';
	int c2 = 3;
	int c3 = 'a';
	char c4 = 3;

	if (isdigit(c1) == ft_isdigit(c1))
		write(1,"PASSED\n",7);
	else
		write(1,"FAILED\n",7);

	if (isdigit(c2) == ft_isdigit(c2))
		write(1,"PASSED\n",7);
	else
		write(1,"FAILED\n",7);
	if (isdigit(c3) == ft_isdigit(c3))
		write(1,"PASSED\n",7);
	else
		write(1,"FAILED\n",7);
	if (isdigit(c4) == ft_isdigit(c4))
		write(1,"PASSED",6);
	else
		write(1,"FAILED",6);
}
*/
