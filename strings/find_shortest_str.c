/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_shortest_str.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:52:14 by thepaqui          #+#    #+#             */
/*   Updated: 2023/06/11 17:58:05 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Returns the index of the shortest string in the array,
//which must be NULL-terminated, or -1 if it receives NULL as tab
int	find_shortest_str(char **tab)
{
	int	i;
	int	ret;
	int	l;

	if (!tab)
		return (-1);
	l = ft_strlen(tab[0]);
	ret = 0;
	i = 0;
	while (tab[++i])
	{
		if (ft_strlen(tab[i]) < l)
		{
			l = ft_strlen(tab[i]);
			ret = i;
		}
	}
	return (ret);
}
