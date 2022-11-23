/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:11:08 by thepaqui          #+#    #+#             */
/*   Updated: 2022/11/13 14:45:48 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	dst_size;

	if (!s1 || !s2)
		return (NULL);
	dst_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	dst = (char *)malloc(sizeof(*dst) * dst_size);
	if (!dst)
		return (dst);
	*dst = 0;
	ft_strlcat(dst, s1, dst_size);
	ft_strlcat(dst, s2, dst_size);
	return (dst);
}
