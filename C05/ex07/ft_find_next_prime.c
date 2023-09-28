/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:35:12 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/20 13:26:39 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	d;

	d = 3;
	if (nb == 2)
		return (1);
	if (nb < 0)
		nb = -nb;
	if (nb % 2 == 0)
		return (0);
	while (d <= nb / 2)
	{
		if (nb % d == 0)
			return (0);
		d = d + 2;
	}
	if (nb == 0 || nb == 1)
		return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		nb = 0;
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}

/*int	main()
{
	printf("%d", ft_find_next_prime(-1841));
}*/
