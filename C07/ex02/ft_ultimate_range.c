/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:53:13 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/13 22:03:53 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	tab = NULL;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc((max - min) * sizeof(int));
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	tab[i] = '\0';
	*range = tab;
	return (i);
}

/*int main()
{
	int i;
	int *range;

	i = 0;
	while (i < ft_ultimate_range(&range, 5, 10))
	{
		printf("%d", range[i]);
		i++;
	}
	free(range);
}*/
