/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:44:50 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/25 10:44:54 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

void	set_coord(int i, int *k, char *buff, t_coord *coords)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (buff[i] != '\n')
		i++;
	while (buff[i])
	{
		if (buff[i] != '\n')
		{
			coords[*k].x = x;
			coords[*k].y = y;
			coords[*k].content = buff[i];
			(*k)++;
		}
		if (buff[i] == '\n')
		{
			y++;
			x = 0;
		}
		i++;
		x++;
	}
}

t_coord	*get_coords(int f_len, char *buff, int k)
{
	t_coord	*coords;

	coords = malloc((f_len + 1) * sizeof(t_coord));
	if (!coords)
	{
		free(buff);
		return (0);
	}
	set_coord(0, &k, buff, coords);
	coords[k].content = 0;
	free(buff);
	return (coords);
}

t_coord	*read_map(char *filename, t_param *param, int f_len)
{
	int		fd;
	char	*buff;
	char	c;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, &c, 1))
		f_len++;
	close(fd);
	buff = malloc(f_len + 1 * sizeof(char));
	if (!buff)
		return (0);
	fd = open(filename, O_RDONLY);
	read(fd, buff, f_len);
	buff[f_len] = '\0';
	close(fd);
	is_valid_file(buff, param);
	if (param->size == 0)
	{
		free(buff);
		return (0);
	}
	return (get_coords(f_len, buff, 0));
}
