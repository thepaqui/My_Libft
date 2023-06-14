/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsuf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 12:54:51 by thepaqui          #+#    #+#             */
/*   Updated: 2023/04/23 15:40:17 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsuf(char **tab, char *suf)
{
	char	*tmp;
	int		i;

	if (!tab)
		return (NULL);
	if (!suf || !*suf)
		return (tab);
	i = -1;
	while (tab[++i])
	{
		tmp = tab[i];
		tab[i] = ft_strjoin(tab[i], suf);
		free(tmp);
		if (!tab[i])
			return (free_tab(tab, -1));
	}
	return (tab);
}
