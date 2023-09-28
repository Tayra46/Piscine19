/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:47:35 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/07 21:01:39 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i; 
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

/* int main(){
	char str[] = "Create a function that counts and returns 
	the number of characters in a string.";
	int count = ft_strlen(str);
	printf("nombre de caracteres dans le string : %d\n", count);
}*/
