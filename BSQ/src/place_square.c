/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:27:24 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/27 14:27:25 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

void	place_square(t_square bsq, t_coord *coords, t_param param)
{
	int	curr_x;
	int	curr_y;

	curr_y = bsq.corner1.y;
	while (curr_y <= bsq.corner2.y)
	{
		curr_x = bsq.corner1.x;
		while (curr_x <= bsq.corner2.x)
		{
			get_modifiable_coord(curr_x, curr_y, coords)->content = param.fill;
			curr_x++;
		}
		curr_y++;
	}
}
