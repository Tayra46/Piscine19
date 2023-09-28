/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_var.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:26:29 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/16 17:16:14 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_var.h"

t_var	get_var(int i)
{
	t_var var;

	if (i == 4)
	{
		var.nbpos = 1;
		var.pos[0] = 1234;
	}
	if (i == 3)
	{
		var.nbpos = 5;
		var.pos[0] = {1, 2, 3, 4};
		var.pos[1] = 1342;
		var.pos[2] = 2341;
		var.pos[3] = 2314;
		var.pos[4] = 1324;
	}
	if (i == 2)
	{
		var.nbpos = 11;
		var.pos[0] = 3412;
		var.pos[1] = 3421;
		var.pos[2] = 1432;
		var.pos[3] = 1423;
		var.pos[4] = 2431;
		var.pos[5] = 2413;
		var.pos[6] = 3214;
		var.pos[7] = 3124;
		var.pos[8] = 3142;
		var.pos[9] = 3241;
		var.pos[10] = 2143;
	}
	if (i == 1)
	{
		var.nbpos = 6;
		var.pos[0] = 4123;
		var.pos[1] = 4231;
		var.pos[2] = 4321;
		var.pos[3] = 4312;
		var.pos[4] = 4132;
		var.pos[5] = 4213;
	}
	return (var);
}
