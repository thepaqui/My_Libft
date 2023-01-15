/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 12:50:25 by thepaqui          #+#    #+#             */
/*   Updated: 2023/01/15 12:54:24 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_free_tab(char **tab, int index)
{
	if (index == -1)
  {
    while (tab(++index))
      free(tab[index]);
    index = -1;
  }
  while (index >= 0)
	{
		if (tab[index])
			free(tab[index]);
		index--;
	}
	if (tab)
		free(tab);
	return (NULL);
}
