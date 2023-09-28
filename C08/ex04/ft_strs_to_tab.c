/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:56:47 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/18 11:05:08 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *src, int size)
{
	char	*cpy;
	int		i;

	cpy = malloc((size + 1) * sizeof(char));
	i = -1;
	if (cpy == NULL)
		return (NULL);
	while (++i < size)
		cpy[i] = src[i];
	cpy[i] = '\0';
	return (cpy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*t_stock;

	i = -1;
	if (ac < 0)
		ac = 0;
	t_stock = malloc((ac + 1) * sizeof(t_stock_str));
	if (t_stock == NULL)
		return (NULL);
	while (++i < ac)
	{
		t_stock[i].size = ft_strlen(av[i]);
		t_stock[i].str = av[i];
		t_stock[i].copy = ft_strcpy(av[i], ft_strlen(av[i]));
	}
	t_stock[i].str = 0;
	return (t_stock);
}

/*int	main()
{
	char s1[] = "this is the char 1";
	char s2[] = "char 3 is comming !";
	char s3[] = "finally char 3";
	char *av[3];

	av[0] = s1;
	av[1] = s2;
	av[2] = s3;
	t_stock_str	*str = ft_strs_to_tab(3, av);
	ft_show_tab(str);
	free(str);
}*/
