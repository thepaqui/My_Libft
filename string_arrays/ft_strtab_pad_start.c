/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtab_pad_start.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:34:23 by thepaqui          #+#    #+#             */
/*   Updated: 2023/06/14 18:53:41 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Adds padding characters (pad) at the start of all
// strings so they all have the same length
void	ft_strtab_pad_start(char **tab, char pad)
{
	int		i[3];
	int		len;
	char	*t;

	if (!tab)
		return ;
	i[0] = find_longest_str(tab);
	len = ft_strlen(tab[i[0]]);
	i[0] = -1;
	while (tab[++i[0]])
	{
		i[1] = ft_strlen(tab[i[0]]);
		if (i[1] == len)
			continue ;
		t = ft_calloc(len + 1, sizeof(char));
		if (!t)
			return ;
		i[2] = 0;
		while (i[2] < len - i[1])
			t[i[2]++] = pad;
		ft_strlcat(t, tab[i[0]], len + 1);
		free(tab[i[0]]);
		tab[i[0]] = t;
	}
}
