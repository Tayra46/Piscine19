/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_max_y.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:25:17 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/27 14:25:19 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

int	ft_get_max_y(t_coord *coords)
{
	int	i;
	int	curr_y;

	i = 0;
	curr_y = 0;
	while (coords[i].content != 0)
	{
		if (coords[i].y > curr_y)
			curr_y = coords[i].y;
		i++;
	}
	return (curr_y);
}
