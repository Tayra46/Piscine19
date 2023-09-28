/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:26:31 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/27 14:26:40 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

int	length_check(char *str, t_param *param)
{
	int	size;
	int	check;
	int	line_number;
	int	i;

	line_number = 0;
	check = 0;
	size = count_line(str, 0);
	if (size < 1)
		return (0);
	while (line_number < param->size)
	{
		i = check;
		check = count_line(str, check);
		if (size != check - i)
			return (0);
		check++;
		line_number++;
	}
	if (str[check - 1] == '\n')
		if (str[check] == 0)
			return (1);
	return (0);
}

int	check_map(char *map, t_param *param)
{
	int	i;
	int	is_full;

	i = 0;
	is_full = 1;
	while (map[i])
	{
		if (map[i] != '\n')
		{
			if (param->wall != map[i] 
				&& param->blank != map[i])
				return (0);
			if (param->blank == map[i])
				is_full = 0;
			i++;
		}
		else
			i++;
	}
	if (is_full == 1)
		return (0);
	return (1);
}

void	encode(t_param *param, int line_len, char *str)
{
	if (line_len >= 4)
	{
		param->size = ft_atoi(str, line_len - 4);
		param->fill = str[line_len -1];
		param->wall = str[line_len -2];
		param->blank = str[line_len -3];
	}
}

int	check_char(t_param *param)
{
	if (param->fill < 32 || param->fill == 127)
		return (0);
	if (param->blank < 32 || param->blank == 127)
		return (0);
	if (param->wall < 32 || param->wall == 127)
		return (0);
	if (param->fill == param->wall || param->fill == param->blank)
		return (0);
	if (param->wall == param->blank)
		return (0);
	return (1);
}

void	is_valid_file(char *str, t_param *param)
{
	char	*map;
	int		line_len;

	param->size = 0;
	line_len = count_line(str, 0);
	if (line_len < 4)
		return ;
	encode(param, line_len, str);
	map = &str[++line_len];
	if (length_check(map, param) != 1 
		|| check_char(param) != 1 
		|| check_map(map, param) != 1)
		param->size = 0;
	return ;
}
