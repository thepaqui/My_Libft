/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:09:17 by thepaqui          #+#    #+#             */
/*   Updated: 2022/11/13 15:11:04 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_strcount(char const *str, char c)
{
	int	str_count;

	if (!*str)
		return (0);
	str_count = 0;
	if (*str != c)
		str_count++;
	while (*str)
	{
		if (*str == c)
		{
			if (*(str + 1) == 0)
				return (str_count);
			else if (*(str + 1) != c)
				str_count++;
		}
		str++;
	}
	return (str_count);
}

static size_t	ft_strlen_char(char const *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static char	**ft_free_tab(char **tab, int index)
{
	while (index >= 0)
	{
		if (tab[index])
			free(tab[index]);
		index--;
	}
	if (tab)
		free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		nb_str;
	int		i;

	if (!s)
		return (NULL);
	nb_str = ft_strcount(s, c);
	tab = malloc(sizeof(*tab) * (nb_str + 1));
	if (!tab)
		return (NULL);
	i = 0;
	tab[nb_str] = NULL;
	while (i < nb_str && *s)
	{
		while (*s == c)
			s++;
		tab[i] = malloc(sizeof(char) * (ft_strlen_char(&*s, c) + 1));
		if (!tab[i])
			return (ft_free_tab(tab, i));
		ft_strlcpy(tab[i++], &*s, ft_strlen_char(&*s, c) + 1);
		while (*s && *s != c)
			s++;
	}
	return (tab);
}
