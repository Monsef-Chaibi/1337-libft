/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaibi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:38:55 by mchaibi           #+#    #+#             */
/*   Updated: 2024/11/02 11:02:39 by mchaibi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nd_tmp;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		nd_tmp = *lst;
		*lst = (*lst)->next;
		if (del)
			(*del)(nd_tmp->content);
		free(nd_tmp);
	}
}
