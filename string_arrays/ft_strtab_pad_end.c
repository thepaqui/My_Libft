/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtab_pad_end.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:34:23 by thepaqui          #+#    #+#             */
/*   Updated: 2023/06/14 18:51:19 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Adds padding characters (pad) at the end of all
// strings so they all have the same length
void	ft_strtab_pad_end(char **tab, char pad)
{
	int		i;
	int		j;
	int		len;
	char	*t;

	if (!tab)
		return ;
	i = find_longest_str(tab);
	len = ft_strlen(tab[i]);
	i = -1;
	while (tab[++i])
	{
		j = ft_strlen(tab[i]);
		if (j == len)
			continue ;
		t = ft_calloc(len + 1, sizeof(char));
		if (!t)
			return ;
		ft_strlcat(t, tab[i], len + 1);
		while (j < len)
			t[j++] = pad;
		free(tab[i]);
		tab[i] = t;
	}
}
