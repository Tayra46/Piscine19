/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschlech <jschlech@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 09:31:13 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/10 10:43:57 by bmouli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	test_first_line(int c, int a)
{
	if (c == 0)
		ft_putchar('o');
	if (a == 1)
	{
		if (c == a)
			ft_putchar('o');
	}
	else
	{
		if (c == a - 1)
			ft_putchar('o');
	}
	if (c != 0 && c != a - 1)
		ft_putchar('-');
}

void	test_last_line(int c, int a)
{
	if (c == 0)
		ft_putchar('o');
	if (a == 1)
	{
		if (c == a)
			ft_putchar('o');
	}
	else
	{
		if (c == a - 1)
			ft_putchar('o');
	}
	if (c != 0 && c != a - 1)
		ft_putchar('-');
}

void	test_middle_line(int c, int a)
{
	if (c == 0 | c == a - 1)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int a, int b)
{
	int	i;
	int	c;

	i = -1;
	while (++i < b)
	{
		c = -1;
		while (++c < a)
		{
			if (i == 0)
				test_first_line(c, a);
			if (b == 1)
				if (i == b)
					test_last_line(c, a);
			if (b != 1)
				if (i == b - 1)
					test_last_line(c, a);
			if (i != 0 && i != b - 1)
				test_middle_line(c, a);
		}
		ft_putchar('\n');
	}
}
