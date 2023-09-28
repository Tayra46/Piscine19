/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_bsq.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:15:24 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/27 14:15:27 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

t_coord	get_coord(int x, int y, t_coord *coords)
{
	int		i;
	t_coord	coord;

	i = 0;
	while (coords[i].content != 0)
	{
		if (coords[i].x == x && coords[i].y == y)
			return (coords[i]);
		i++;
	}
	coord.content = 0;
	return (coord);
}

/*int	test_square(t_coord *coords, int index, t_coord coord, t_param param)
{
	int	curr_x;
	int	curr_y;

	curr_y = coords[index].y;
	while (curr_y <= coord.y)
	{
		curr_x = coords[index].x;
		while (curr_x <= coord.x)
		{
			if (get_coord(curr_x, curr_y, coords).content == param.wall)
				return (0);
			curr_x++;
		}
		curr_y++;
	}
	return (1);
}*/

int	test_square(t_coord *coords, int index, t_coord coord, t_param param)
{
	int	y;
	int	x;
	int	max_y;
	int	max_x;

	max_y = get_max_y(coords);
	y = coord.y;
	while (y > 0 + max_y)
	{
		if (coords[y].content == param.wall)
			return (0);
		index -= max_y;
	}
	x = coord.x;
	while (x > 0)
	{
		if (coords[x].content == param.wall)
			return (0);
		x--;
	}
	return (1);
}

void	set_bsq(t_coord corner1, t_coord corner2, t_square *bsq)
{
	bsq->corner1 = corner1;
	bsq->corner2 = corner2;
}

void	find_bsq(t_coord *coords, int *index, t_param param, t_square *bsq)
{
	int	x;
	int	y;

	y = coords[index[0]].y;
	x = coords[index[0]].x;
	if (coords[index[0]].content != param.wall 
		&& (bsq->corner2.x - bsq->corner1.x <= 0) && index[1] == 0)
	{
		set_bsq(coords[index[0]], coords[index[0]], bsq);
		index[1] = 1;
	}
	while (x < ft_get_max_x(coords) && y < ft_get_max_y(coords))
	{
		if (!test_square(coords, index[0], 
				get_coord(x + 1, y + 1, coords), param))
			break ;
		x++;
		y++;
	}
	if (bsq->corner2.x - bsq->corner1.x < x - coords[index[0]].x)
		set_bsq(coords[index[0]], get_coord(x, y, coords), bsq);
	if (x == ft_get_max_x(coords) && y == ft_get_max_y(coords))
		return ;
	index[0]++;
	find_bsq(coords, index, param, bsq);
}
