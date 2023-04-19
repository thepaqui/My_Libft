/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:52:24 by thepaqui          #+#    #+#             */
/*   Updated: 2023/04/19 15:52:49 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ts1;
	const unsigned char	*ts2;
	size_t				i;

	if (n == 0)
		return (0);
	ts1 = (unsigned char *)s1;
	ts2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ts1[i] == ts2[i])
			i++;
		else
			return (ts1[i] - ts2[i]);
	}
	return (0);
}
