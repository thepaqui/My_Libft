/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skip_spaces.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:17:33 by thepaqui          #+#    #+#             */
/*   Updated: 2023/06/13 19:59:37 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Skips chars in s until char is not a whitespace
void	skip_spaces(char *s, int *index)
{
	int	i;

	if (!s || !index)
		return ;
	i = *index;
	while (s[i] && ft_isspace(s[i]))
		i++;
	*index = i;
}
