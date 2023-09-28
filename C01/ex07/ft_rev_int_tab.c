/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:56:55 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/07 21:47:04 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	holder;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		holder = tab[size - 1 - i];
		tab[size - 1 - i] = tab[i];
		tab[i] = holder;
		i++;
	}
}

/*int main(){
	int tab[] = {3, 4, 5, 6, 7};
	int size = 5;

	ft_rev_int_tab(tab, size);

	int i = 0;
	while (i < size){
		printf("%d", tab[i]);
		i++;
	}
	return 0;
}*/
