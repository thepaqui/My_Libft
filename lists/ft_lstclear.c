/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:19:37 by thepaqui          #+#    #+#             */
/*   Updated: 2022/11/13 19:50:51 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp_lst;
	t_list	*temp_nd;

	if (!lst || !*lst || !del)
		return ;
	temp_lst = *lst;
	while (temp_lst->next)
	{
		temp_nd = temp_lst;
		temp_lst = temp_lst->next;
		ft_lstdelone(temp_nd, del);
	}
	ft_lstdelone(temp_lst, del);
	*lst = NULL;
}
