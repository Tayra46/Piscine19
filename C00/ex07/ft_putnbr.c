/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 07:59:38 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/19 12:30:18 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	print_char(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		print_char('-');
		print_char('2');
		ft_putnbr(147483648);
	}
	else
	{
		if (nb < 0)
		{
			print_char('-');
			nb = -nb;
		}
		if (nb <= 9)
		{
			print_char(nb + '0');
		}
		else
		{
			ft_putnbr(nb / 10);
			print_char((nb % 10) + '0');
		}
	}
}
