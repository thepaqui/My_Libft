/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:19:56 by thepaqui          #+#    #+#             */
/*   Updated: 2023/04/19 15:51:40 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strclen(const char *str, const char *set)
{
	size_t	i;

	if (!str)
		return (0);
	if (!set || !*set)
		return (ft_strlen(str));
	i = 0;
	while (str[i] && !ft_isinset((int)str[i], set))
		i++;
	return (i);
}
