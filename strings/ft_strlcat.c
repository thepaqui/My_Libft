/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:19:09 by thepaqui          #+#    #+#             */
/*   Updated: 2022/11/23 12:48:41 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	if (!dst && !dstsize)
		return (0);
	if (!src)
		return (dstsize);
	if (!dst)
		return (ft_strlen(src));
	i = 0;
	j = 0;
	while (dst[i] && i < dstsize)
		i++;
	len = i + ft_strlen(src);
	while (src[j] && i + 1 < dstsize)
		dst[i++] = src[j++];
	if (dstsize > i)
		dst[i] = 0;
	return (len);
}
