/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtabdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:09:49 by thepaqui          #+#    #+#             */
/*   Updated: 2023/04/25 14:11:40 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns a malloced copy of tab, or NULL in case of error
char	**ft_strtabdup(const char **tab)
{
	char	**copy;
	size_t	tabsize;
	int		i;

	if (!tab)
		return (NULL);
	tabsize = ft_strtablen(tab) + 1;
	copy = ft_calloc(tabsize, sizeof(char *));
	if (!copy)
		return (NULL);
	i = -1;
	while (tab[++i])
	{
		copy[i] = ft_strdup(tab[i]);
		if (!copy[i])
			return (ft_free_tab(copy, i));
	}
	return (copy);
}
