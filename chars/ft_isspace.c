int	ft_isspace(int c)
{
	if (ft_isinset(c, " \n\t\v\r\f"))
		return (1);
	return (0);
}
