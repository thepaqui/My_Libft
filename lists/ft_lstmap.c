/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:57:14 by thepaqui          #+#    #+#             */
/*   Updated: 2022/11/14 13:00:08 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static t_list	*ft_lstmap_fail(t_list **maph, void (*del)(void *))
{
	ft_lstclear(maph, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*maph;
	void	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	tmp = f(lst->content);
	if (!tmp)
		return (NULL);
	map = ft_lstnew(tmp);
	if (!map)
		return (NULL);
	maph = map;
	while (lst->next)
	{
		lst = lst->next;
		tmp = f(lst->content);
		if (!tmp)
			return (ft_lstmap_fail(&maph, del));
		map = ft_lstnew(tmp);
		if (!map)
			return (ft_lstmap_fail(&maph, del));
		ft_lstadd_back(&maph, map);
	}
	return (maph);
}
