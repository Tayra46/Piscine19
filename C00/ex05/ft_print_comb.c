/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:18:05 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/07 11:50:42 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	hun;
	int	doz;
	int	uni;

	hun = '0';
	while (hun <= '7')
	{
		doz = hun +1;
		while (doz <= '8')
		{
			uni = doz +1;
			while (uni <= '9')
			{
				write(1, &hun, 1);
				write(1, &doz, 1);
				write(1, &uni, 1);
				if (hun < '7')
					write(1, ", ", 2);
				uni++;
			}
			doz++;
		}
		hun++;
	}
}
