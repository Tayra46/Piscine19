
int	is_increase(int value)
{
	if (value >= 0)
		return (1);
	else
		return (0);
}

int	is_decrease(int value)
{
	if (value <= 0)
		return (1);
	else
		return (0);
}

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	increase;
	int	decrease;

	increase = 1;
	decrease = 1;
	i = 0;
	while (++i < length)
	{
		increase = is_increase(f(tab[i - 1], tab[i]));
		decrease = is_decrease(f(tab[i - 1], tab[i]));
	}
	if (increase == 1 || decrease == 1)
		return (1);
	else 
		return (0);
}