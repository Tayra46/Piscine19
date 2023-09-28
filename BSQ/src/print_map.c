/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:27:32 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/27 14:27:35 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

void	print_map(t_coord *coords)
{
	int	i;
	int	k;

	i = 0;
	k = 1;
	while (coords[i].content != 0)
	{
		if (coords[i].y != k)
		{
			ft_putchar('\n');
			k = coords[i].y;
		}
		ft_putchar(coords[i].content);
		i++;
	}
	ft_putchar('\n');
}
