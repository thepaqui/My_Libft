/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:46:53 by thepaqui          #+#    #+#             */
/*   Updated: 2022/11/13 10:17:12 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*destination;
	unsigned char	*source;

	if (!dst && !src && n)
		return (NULL);
	source = (unsigned char *)src;
	destination = (unsigned char *)dst;
	i = 0;
	while (i++ < n)
		*destination++ = *source++;
	return (dst);
}
