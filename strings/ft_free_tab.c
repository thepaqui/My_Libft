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
