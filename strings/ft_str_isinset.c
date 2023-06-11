/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isinset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 18:16:20 by thepaqui          #+#    #+#             */
/*   Updated: 2023/06/11 18:23:18 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Returns 1 if all characters in str are also in set, 0 otherwise
int	ft_str_isinset(char *str, char *set)
{
	int	i;

	if (!str)
		return (0);
	if (!set)
		return (1);
	i = 0;
	while (str[i])
		if (!ft_isinset(str[i], set))
			return (0);
	return (1);
}
