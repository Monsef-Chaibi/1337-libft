/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaibi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:38:55 by mchaibi           #+#    #+#             */
/*   Updated: 2024/11/05 10:49:19 by mchaibi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nd_tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		nd_tmp = *lst;
		*lst = (*lst)->next;
		(*del)(nd_tmp->content);
		free(nd_tmp);
	}
}
