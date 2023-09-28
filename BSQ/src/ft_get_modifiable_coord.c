/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_modifiable_coord.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:25:28 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/27 14:25:30 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

t_coord	*get_modifiable_coord(int x, int y, t_coord *coords)
{
	int	i;

	i = 0;
	while (coords[i].content != 0)
	{
		if (coords[i].x == x && coords[i].y == y)
			return (&coords[i]);
		i++;
	}
	return (&coords[i]);
}
