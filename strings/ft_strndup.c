/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:38:36 by thepaqui          #+#    #+#             */
/*   Updated: 2023/04/19 15:38:45 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, int n)
{
	char	*copy;
	int		i;

	if (!str)
		return (NULL);
	copy = ft_calloc(n + 1, sizeof(char));
	if (!copy)
		return (NULL);
	i = -1;
	while (str[++i] && i < n)
		copy[i] = str[i];
	copy[i] = '\0';
	return (copy);
}
