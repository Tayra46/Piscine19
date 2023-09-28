/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:39:37 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/12 20:10:42 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	rep;

	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0 && nb != 0)
		return (1);
	rep = nb;
	while (--power > 0)
		rep *= nb;
	return (rep);
}

/*int	main()
{
	printf("%d", ft_iterative_power(2, 0));
}*/
