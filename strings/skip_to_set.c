/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skip_to_set.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:59:51 by thepaqui          #+#    #+#             */
/*   Updated: 2023/06/13 20:01:24 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Skips chars in s until char is from the set
void	skip_to_set(char *s, int *index, char *set)
{
	int	i;

	if (!s || !index)
		return ;
	i = *index;
	while (s[i] && !ft_isinset(s[i], set))
		i++;
	*index = i;
}
