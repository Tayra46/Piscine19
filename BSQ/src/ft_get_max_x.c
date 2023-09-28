/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_max_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:25:06 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/27 14:25:08 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

int	ft_get_max_x(t_coord *coords)
{
	int	i;
	int	curr_x;

	i = 0;
	curr_x = 0;
	while (coords[i].content != 0)
	{
		if (coords[i].x > curr_x)
			curr_x = coords[i].x;
		i++;
	}
	return (curr_x);
}
