#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*returns;

	returns = malloc(length * sizeof(int));
	i = -1;
	while (++i < length)
	{
		returns[i] = f(tab[i]);
	}
	return (returns);
}