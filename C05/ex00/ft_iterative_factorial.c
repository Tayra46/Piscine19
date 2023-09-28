/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:21:10 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/12 19:37:55 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	rep;

	rep = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (--nb > 0)
	{
		rep *= nb;
	}
	return (rep);
}

/*int	main()
{
	printf("%d", ft_iterative_factorial(-5));
}*/
