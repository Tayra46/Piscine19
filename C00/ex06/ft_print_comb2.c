/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:09:20 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/07 09:45:23 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	prnt_nb(char num)
{
	char	doz;
	char	unit;

	doz = (num / 10) + 48;
	unit = (num % 10) + 48;
	write(1, &doz, 1);
	write(1, &unit, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (++a <= 98)
	{
		b = a;
		while (++b <= 99)
		{
			prnt_nb(a);
			write(1, " ", 1);
			prnt_nb(b);
			if (a < 98)
			{
				write(1, ", ", 2);
			}
		}
	}
}
