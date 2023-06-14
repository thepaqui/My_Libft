/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpre.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:40:52 by thepaqui          #+#    #+#             */
/*   Updated: 2023/04/23 15:40:17 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strpre(char **tab, char *pre)
{
	char	*tmp;
	int		i;

	if (!tab)
		return (NULL);
	if (!pre || !*pre)
		return (tab);
	i = -1;
	while (tab[++i])
	{
		tmp = tab[i];
		tab[i] = ft_strjoin(pre, tab[i]);
		free(tmp);
		if (!tab[i])
			return (free_tab(tab, -1));
	}
	return (tab);
}
