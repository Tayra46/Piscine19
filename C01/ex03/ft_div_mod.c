/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:02:28 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/07 20:49:13 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

/*int main(void){
	int a = 42;
	int b = 10;
	int keepdiv;
	int keepmod;


	int *div = &keepdiv;
	int *mod = &keepmod;
	
	ft_div_mod(a, b, div, mod);

	printf("div %d / %d = %d\n", a, b,  *div);
	printf("modulo %d / %d = %d\n", a, b,  *mod);
	return 0;
}*/
