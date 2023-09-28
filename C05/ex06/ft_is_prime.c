/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:07:49 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/20 08:59:23 by hle-roi          ###   ########.fr       */
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

/*int	main()
{
	printf("%d", ft_is_prime(333));

}*/
