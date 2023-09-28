/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:27:56 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/10 10:10:32 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(65 <= str[i] && str[i] <= 90))
			return (0);
		i++;
	}
	return (1);
}

/*int main(){
	char str[] = "DTYUIOKJdff";
	printf("%d", ft_str_is_uppercase(str));
	return 0;
}*/
