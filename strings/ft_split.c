/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:09:17 by thepaqui          #+#    #+#             */
/*   Updated: 2023/04/23 15:40:17 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strcount(char const *str, char *set)
{
	int	i;
	int	str_len;
	int	str_count;

	str_count = 0;
	str_len = 0;
	i = 0;
	while (str[i])
	{
		if (ft_isinset((int)str[i], set))
		{
			if (str_len > 0)
			{
				str_count++;
				str_len = 0;
			}
		}
		else
			str_len++;
		i++;
	}
	if (str_len > 0)
		str_count++;
	return (str_count);
}

char	**ft_split(char const *s, char *set)
{
	char	**tab;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	tab = ft_calloc((ft_strcount(s, set) + 1), sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strcount(s, set) && s[j])
	{
		while (ft_isinset((int)s[j], set))
			j++;
		tab[i] = ft_calloc((ft_strclen(&s[j], set) + 1), sizeof(char));
		if (!tab[i])
			return (free_tab(tab, i));
		ft_strlcpy(tab[i++], &s[j], ft_strclen(&s[j], set) + 1);
		while (s[j] && !ft_isinset((int)s[j], set))
			j++;
	}
	tab[i] = NULL;
	return (tab);
}
