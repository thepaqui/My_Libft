/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:36:49 by thepaqui          #+#    #+#             */
/*   Updated: 2023/04/19 15:52:36 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ischarinset(int c, char const *set)
{
	int	i;

	i = -1;
	while (set[++i])
		if (set[i] == (char)c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*res;
	unsigned int	start;
	int				len;

	if (!s1)
		return (NULL);
	start = 0;
	while (s1[start] && ft_ischarinset((int)s1[start], set))
		start++;
	len = ft_strlen(s1);
	while (ft_ischarinset((int)s1[len - 1], set))
	{
		len--;
		if (!len)
			break ;
	}
	if (len <= (int)start)
		len = 0;
	else
		len -= start;
	res = ft_substr(s1, start, len);
	return (res);
}
