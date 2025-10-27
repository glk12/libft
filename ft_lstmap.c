/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 03:02:50 by glopes-a          #+#    #+#             */
/*   Updated: 2025/10/27 04:21:32 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_lst;

	if (!f)
	{
		while (lst)
			{
				del(lst->content);
				lst = lst->next;
			}
	}
	while (lst)
	{
		n_lst = ft_lstnew(f(lst->content));
		lst = lst->next;
	}
}
