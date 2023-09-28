/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_standart_input.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:28:12 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/27 14:28:20 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

void	initializer(char *tab, int size)
{
	size--;
	while (size >= 0)
	{
		tab[size] = 0;
		size--;
	}
}

void	map_reader(char *megabuff, int line_number)
{
	char	buff[1000];

	initializer(buff, 1000);
	while (0 <= line_number)
	{
		read(0, buff, 999);
		ft_strjoin(buff, megabuff);
		initializer(buff, 1000);
		line_number--;
	}
}

int	line_nb_error(int line_number, char *megabuff)
{
	if (line_number == 0)
	{
		free(megabuff);
		return (0);
	}
	return (1);
}

char	*read_standard_input(int line_number)
{
	char	param[7];
	char	*megabuff;
	char	*str;

	initializer(param, 7);
	megabuff = malloc(10000 * sizeof(char));
	if (!megabuff)
		return ("\0");
	read(0, param, 4);
	line_number = ft_atoi(param, count_line(param, 0) - 3);
	if (line_nb_error(line_number, megabuff) == 0)
		return ("\0");
	ft_strjoin(param, megabuff);
	map_reader(megabuff, line_number);
	str = malloc((ft_strlen(megabuff) + 1) * sizeof(char));
	if (!str)
	{
		free(megabuff);
		return ("\0");
	}
	ft_strjoin(megabuff, str);
	free(megabuff);
	return (str);
}
