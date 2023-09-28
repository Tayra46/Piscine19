/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 09:48:42 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/16 17:34:14 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_var.h"

int	test_grid(int grid[4][4], int param[16]);
t_var	get_var(int i);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_grid(int grid[4][4])
{
	int	x;
	int y;

	x = -1;
	while (++x < 4)
	{
		y = -1;
		while (++y < 4)
		{
			ft_putchar(grid[x][y] + 48);
			if (y != 3)
				ft_putchar(' ');	
		}
		ft_putchar('\n');
	}
}

void	ft_split(char **argv, int grid[4][4], int param[16])
{
	int x;
	int y;

	x = -1;
	while (++x < 16)
		param[x] = (argv[1][x * 2]) - 48;

	x = -1;
	while (++x < 4)
	{
		y = -1;
		while (++y < 4)
		{
				grid[x][y] = 0;
		}
	}
}

int	ft_getlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	test_rev_line(int pos[4])
{
	int count;
    int highest_val;
    int i;

    i = 4;
    count = 1;
    highest_val = 0;
    while (--i >= 0)
    {
        if (pos[i] > highest_val)
        {
            highest_val = pos[i];
            count++;
        }
    }
    return (count);

}

void	set_line(int grid[4][4], int current_line, )

int	main(int argc, char **argv)
{
	int	grid[4][4];
	int param[16];

	ft_split(argv, grid, param);
	print_grid(grid);
}

void	backtrack(int grid[4][4], int current_line, int param[16])
{
	int i;
	t_var var;

	if (test_grid(grid, param) == 1)
	{
		print_grid(grid);
		return;
	}
	var = get_var(param[current_line]);
	i = -1;
	while (++i < var.nbpos)
	{
		if (test_rev_line(&var.pos[current_line]) == param[current_line + 13])
		{
			set_line(grid, current_line, var.pos[i]); // copy line from var.pos[i] to grid line current_line
			backtrack(grid, current_line + 1, param);
		}
	}
	grid[0][0] = -1;
}
