/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:48:04 by thepaqui          #+#    #+#             */
/*   Updated: 2023/06/14 19:18:35 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*copy;
	size_t	size;

	if (!str)
		return (NULL);
	size = ft_strlen(str) + 1;
	copy = ft_calloc(sizeof(*copy) * size);
	if (!copy)
		return (copy);
	ft_strlcpy(copy, str, size);
	return (copy);
}
