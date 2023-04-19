/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:46:45 by thepaqui          #+#    #+#             */
/*   Updated: 2023/04/19 15:52:40 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		sub = ft_calloc(1, sizeof(*sub));
		if (!sub)
			return (NULL);
		return (sub);
	}
	if (len <= ft_strlen(s))
		sub = ft_calloc(len + 1, sizeof(*sub));
	else
		sub = ft_calloc(ft_strlen(s) + 1, sizeof(*sub));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
