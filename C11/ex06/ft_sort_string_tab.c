

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	char *temp;

	i = 0;
	while (tab[i + 1] != 0)
	{
		if (ft_strcmp(tab[i + 1], tab[i]) > 0)
		{
			temp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = temp;
			i = 0;
		}
		i++;
	}
}

#include <stdio.h>
int	main()
{
	char str1[] = "test1";
	char str2[] = "qdf";
	char str3[] = "teqwt3";
	char str4[] = "qeast";
	char str5[] = "test5";
	char str6[] = "\0";
	char *tab[6];

	tab[0] = str1;
	tab[1] = str2;
	tab[2] = str3;
	tab[3] = str4;
	tab[4] = str5;
	tab[5] = str6;

	ft_sort_string_tab(tab);

	int i = 0;
	while (tab[i] != 0)
	{
		printf("%s\n", tab[i]);
		i++;
	}
}