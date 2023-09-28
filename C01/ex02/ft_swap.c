/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:34:22 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/12 15:23:53 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	value_a;

	value_a = *a;
	*a = *b;
	*b = value_a;
}

int main(){

	int a = 4;
	int b = 2;

	int *ada = &a;
	int *adb = &b;
	
	printf("valeur a = %d valeur b = %d\n", *ada, *adb);
	ft_swap(ada, adb);
	printf("valeur a = %d valeur b = %d\n", a, b);

	return 0;
}
