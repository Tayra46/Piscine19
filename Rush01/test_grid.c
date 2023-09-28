/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:36:04 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/16 16:23:27 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	test_rev_line(int pos[4])
{
	int	count;
	int	highest_val;
	int	i;

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

int	test_rev_col(int grid[4][4], int x)
{
	int	count;
	int	highest_val;
	int	i;

	i = 4;
	count = 1;
	highest_val = 0;
	while (--i >= 0)
	{
		if (grid[x][i] > highest_val)
		{
			highest_val = grid[x][i];
			count++;
		}
	}
	return (count);
}

int test_col(int grid[4][4], int x)
{
    int count;
    int highest_val;
    int i;

    i = -1;
    count = 1;
    highest_val = 0;
    while (++i < 4)
    {
        if (grid[x][i] > highest_val)
        {
            highest_val = grid[x][i];
            count++;
        }
    }
    return (count);
}

int	test_grid(int grid[4][4], int param[16])
{
	int	x;
	int	y;

	x = -1;
	y = -1;
	while (++x < 4)
	{
		if (test_col(grid, x) != param[x] && test_rev_col(grid, x) != param[x + 4])
			return (0);
		if (test_rev_line(grid[x]) != param[13 + x])
			return (0);
	}
	return (1);
}
