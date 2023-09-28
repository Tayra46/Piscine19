/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 09:36:58 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/27 14:27:11 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

void	init_bsq(t_square *bsq)
{
	t_coord	corner1;
	t_coord	corner2;

	corner1.x = 0;
	corner1.y = 0;
	corner2.x = 0;
	corner2.y = 0;
	bsq->corner1 = corner1;
	bsq->corner2 = corner2;
}

void	std_input_run(void)
{
	char		*std_input;
	t_param		param;
	t_coord		*coords;
	t_square	bsq;
	int			index[2];

	index[0] = 0;
	index[1] = 0;
	std_input = read_standard_input(0);
	is_valid_file(std_input, &param);
	if (param.size != 0)
	{
		coords = get_coords(ft_strlen(std_input), std_input, 0);
		init_bsq(&bsq);
		find_bsq(coords, index, param, &bsq);
		place_square(bsq, coords, param);
		print_map(coords);
		free(coords);
	}
	else
		ft_putstr("map error\n");
}

void	file_input_run(int i, char **argv, int argc)
{
	t_coord		*coords;
	t_param		param;
	t_square	bsq;
	int			index[2];

	index[0] = 0;
	index[1] = 0;
	coords = read_map(argv[i], &param, 0);
	if (coords != 0)
	{
		init_bsq(&bsq);
		find_bsq(coords, index, param, &bsq);
		place_square(bsq, coords, param);
		print_map(coords);
		if (i + 1 != argc)
			ft_putchar('\n');
	}
	else
		ft_putstr("map error\n");
	free(coords);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 1)
	{
		std_input_run();
	}
	else if (argc > 1)
	{
		while (argc > ++i)
		{
			file_input_run(i, argv, argc);
		}
	}
	return (0);
}
