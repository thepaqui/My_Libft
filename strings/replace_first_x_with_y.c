/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_first_x_with_y.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:44:58 by thepaqui          #+#    #+#             */
/*   Updated: 2023/04/19 15:45:59 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	replace_first_x_with_y(char *s, char x, char y)
{
	int	i;

	if (!s)
		return ;
	i = -1;
	while (s[++i])
	{
		if (s[i] == x)
		{
			s[i] = y;
			return ;
		}
	}
}
