/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:53:51 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/14 16:29:58 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	*pnul;

	i = 0;
	pnul = NULL;
	if (min >= max)
		return (pnul);
	array = malloc((max - min) * sizeof(int));
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

/*int	main()
{
	int *array;
	int i;
	int a = -2147483648;
	int b = -2147483640;

	i = 0;
	array = ft_range(a, b);
	while (i < b - a)
	{
		printf("%d\n", array[i]);
		i++;
	}
	free(array);
}*/
