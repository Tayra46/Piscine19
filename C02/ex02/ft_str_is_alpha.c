/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:52:38 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/10 10:07:45 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	a;

	i = 0;
	while (str[i] != '\0')
	{
		a = str[i];
		if (!(65 <= a && a <= 90) && !(97 <= a && a <= 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main(){
	char test[] = "qfgwJTWPoeiuTHNB";

	printf("%d\n", ft_str_is_alpha(test));
	return 0;
}*/
