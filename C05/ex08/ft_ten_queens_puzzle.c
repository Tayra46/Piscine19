/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:02:57 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/20 12:13:44 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int grid[10])
{
	int		i;
	char	c;

	i = -1;
	while (++i < 10)
	{
		c = grid[i] + 48;
		write(1, &c, 1);
	}
}

int	can_place(int index, int i, int grid[10])
{
	int	a;

	a = 1;
	while (index - a >= 0)
	{
		if (grid[index - a] == i)
			return (0);
		if (a != 0)
			if (grid[index - a] == i - a || grid[index - a] == i + a)
				return (0);
		a++;
	}
	return (1);
}

void	place(int index, int i, int grid[10])
{
	grid[index] = i;
}

void	gen_comb(int index, int grid[10], int *nb_pos)
{
	int	i;

	if (index == 10)
	{
		print(grid);
		write(1, "\n", 1);
		*nb_pos += 1;
		return ;
	}
	i = -1;
	while (++i < 10)
	{
		if (can_place(index, i, grid))
		{
			place(index, i, grid);
			gen_comb(index + 1, grid, nb_pos);
			place(index, 0, grid);
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	grid[10];
	int	i;
	int	a;
	int	*nb_pos;

	nb_pos = &a;
	i = -1;
	a = 0;
	while (++i < 10)
		grid[i] = 0;
	gen_comb(0, grid, nb_pos);
	return (*nb_pos);
}

/*#include <stdio.h>
int	main()
{
	printf("%d", ft_ten_queens_puzzle());
}*/
