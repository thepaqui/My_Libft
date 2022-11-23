/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:04:23 by thepaqui          #+#    #+#             */
/*   Updated: 2022/11/10 16:09:22 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*temp;
	size_t				i;

	temp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*temp == (unsigned char)c)
			return ((void *)temp);
		temp++;
		i++;
	}
	return (NULL);
}
