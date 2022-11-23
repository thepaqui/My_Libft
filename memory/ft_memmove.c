/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:18:17 by thepaqui          #+#    #+#             */
/*   Updated: 2022/11/13 10:18:19 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*destination;
	unsigned char	*source;

	if (dst == src)
		return (dst);
	source = (unsigned char *)src;
	destination = (unsigned char *)dst;
	i = 0;
	if (dst > src)
	{
		while (++i < len)
		{
			source++;
			destination++;
		}
		while (len-- > 0)
			*destination-- = *source--;
		return (dst);
	}
	while (i++ < len)
		*destination++ = *source++;
	return (dst);
}
