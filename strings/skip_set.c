/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skip_set.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:55:52 by thepaqui          #+#    #+#             */
/*   Updated: 2023/06/13 19:59:26 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Skips chars in s until char is not from the set
void	skip_set(char *s, int *index, char *set)
{
	int	i;

	if (!s || !index)
		return ;
	i = *index;
	while (s[i] && ft_isinset(s[i], set))
		i++;
	*index = i;
}
