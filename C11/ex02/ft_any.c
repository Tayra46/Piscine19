int	ft_any(char **tab, int(*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != 0)
	{
		if (!f(tab[i]))
			return (0);
	}
	return (1);
}