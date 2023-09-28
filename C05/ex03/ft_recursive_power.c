/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:51:15 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/12 20:08:54 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	rep;

	if (power == 0 && nb == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 0 && nb != 0)
		return (1);
	if (power == 1)
		rep = nb;
	else
		rep = nb * ft_recursive_power(nb, power - 1);
	return (rep);
}

/*int	main()
{
	printf("%d", ft_recursive_power(2, 0));
}*/
