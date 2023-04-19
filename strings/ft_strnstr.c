/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:20:10 by thepaqui          #+#    #+#             */
/*   Updated: 2023/04/19 15:52:09 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (!str)
		return (NULL);
	if (!to_find || !*to_find)
		return ((char *)str);
	i = 0;
	k = 0;
	while (k < len && str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == 0 && i + j <= len)
			return ((char *)&str[i]);
		i++;
		k++;
	}
	return (NULL);
}
