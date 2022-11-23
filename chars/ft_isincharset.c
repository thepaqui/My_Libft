/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isincharset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:23:55 by thepaqui          #+#    #+#             */
/*   Updated: 2022/11/23 14:30:57 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isincharset(int c, const char *set)
{
	if (!set)
		return (0);
	while (*set)
	{
		if (c == (int)(*set))
			return (1);
		set++;
	}
	return (0);
}
