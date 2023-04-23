/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 12:50:25 by thepaqui          #+#    #+#             */
/*   Updated: 2023/04/23 15:39:52 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**free_tab(char **tab, int index)
{
	if (!tab)
		return (NULL);
	if (index == -1)
	{
		while (tab[++index])
			tab[index] = free_ptr(tab[index]);
		index = -1;
	}
	while (index >= 0)
	{
		if (tab[index])
			tab[index] = free_ptr(tab[index]);
		index--;
	}
	if (tab)
		tab = free_ptr(tab);
	return (NULL);
}
