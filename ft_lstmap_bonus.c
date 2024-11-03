/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaibi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:21:27 by mchaibi           #+#    #+#             */
/*   Updated: 2024/11/03 12:09:06 by mchaibi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nd_tmp;
	t_list	*nd_new;
	t_list	*next;

	if (!f || !del)
		return (NULL);
	nd_tmp = NULL;
	while (lst)
	{
		nd_new = ft_lstnew((*f)(lst->content));
		if (!nd_new)
		{
			while (nd_tmp)
			{
				next = nd_tmp->next;
				(*del)(nd_tmp->content);
				free(nd_tmp);
				nd_tmp = next;
			}
			return (NULL);
		}
		ft_lstadd_back(&nd_tmp, nd_new);
		lst = lst->next;
	}
	return (nd_tmp);
}
