/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:31:16 by thepaqui          #+#    #+#             */
/*   Updated: 2023/04/22 15:09:08 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			t_len;
	const char	*s_st;

	if (!s)
		return (NULL);
	t_len = ft_strlen(s);
	if (!c)
		return ((char *)s + t_len);
	s_st = s - 1;
	s += t_len - 1;
	while (s != s_st)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
