/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:57:21 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/19 12:27:15 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	test_end(int *temp, int n)
{
	int	test;
	int	saven;

	saven = n;
	test = 0;
	while (--n >= 0)
	{
		if (temp[n] == 10 - (saven - n))
			test++;
	}
	if (test == saven)
		return (0);
	return (1);
}

int	test_comb(int *temp, int n)
{
	int	i;

	i = -1;
	while (++i < n - 1)
	{
		if (temp[i] >= temp[i + 1])
			return (1);
	}
	return (0);
}

void	gen_comb(int index, int n, int *comb, int *temp)
{
	int	j;
	int	i;

	if (index == n)
	{
		j = -1;
		if (test_comb(temp, n))
			return ;
		while (++j < n)
		{
			ft_putchar(temp[j] + 48);
		}
		if (test_end(temp, n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	i = -1;
	while (++i < 10)
	{
		temp[index] = comb[i];
		gen_comb(index + 1, n, comb, temp);
	}
}

void	ft_print_combn(int n)
{
	int	temp[10];
	int	comb[10];

	comb[0] = 0;
	comb[1] = 1;
	comb[2] = 2;
	comb[3] = 3;
	comb[4] = 4;
	comb[5] = 5;
	comb[6] = 6;
	comb[7] = 7;
	comb[8] = 8;
	comb[9] = 9;
	gen_comb(0, n, comb, temp);
}

/*int main()
{
	ft_print_combn(2);
	return 0;
}*/
