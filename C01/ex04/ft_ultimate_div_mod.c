/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:15:07 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/07 20:53:04 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	ahold;
	int	bhold;

	ahold = *a;
	bhold = *b;
	*a = ahold / bhold;
	*b = ahold % bhold;
}

/*int main(void){
	int vara;
	int varb;
	int *a = & vara;
	int *b = & varb;

	*a = 42;
	*b = 10;
	
	ft_ultimate_div_mod(a, b);

	printf("div a / b = %d\n", *a);
	printf("mod a / b = %d\n", *b);
	return 0;
}*/
