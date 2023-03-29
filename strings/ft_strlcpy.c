/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:07:00 by thepaqui          #+#    #+#             */
/*   Updated: 2022/11/23 12:47:07 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strlcpy(char *dst, const char *src, int dstsize)
{
	int	i;
	int	j;

	if (!dst && !dstsize)
		return (0);
	if (!src)
		return (dstsize);
	i = ft_strlen(src);
	if (!dst)
		return (i);
	j = -1;
	if (i + 1 < dstsize)
		while (++j < i + 1)
			dst[j] = src[j];
	else if (dstsize > 0)
	{
		while (++j < dstsize - 1)
			dst[j] = src[j];
		dst[j] = '\0';
	}
	return (i);
}
