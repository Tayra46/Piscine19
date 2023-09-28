/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:25:33 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/08 09:15:25 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	i;
	int	lowestnb;
	int	holder;

	a = 0;
	while (a < size)
	{
		i = a;
		lowestnb = tab[i];
		while (i < size)
		{
			if (tab[i] < lowestnb)
			{
				holder = tab[i];
				tab[i] = lowestnb;
				lowestnb = holder;
			}
			i++;
		}
		tab[a] = lowestnb;
		a++;
	}
}

/*int main(){

	int tab[] = {3, 1, 9, -3, 6};
	int size = 5;

	ft_sort_int_tab(tab, size);

	int i = 0;
	while (i < size){
		printf("%d", tab[i]);
		i++;
	}
	return 0;
}*/
