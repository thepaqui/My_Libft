/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrtab_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:23:05 by thepaqui          #+#    #+#             */
/*   Updated: 2023/06/14 18:27:21 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrtab_fd(char **tab, int fd)
{
	int	i;

	if (!tab)
		return ;
	i = -1;
	while (tab[++i])
		ft_putstr_fd(tab[i], fd);
}
