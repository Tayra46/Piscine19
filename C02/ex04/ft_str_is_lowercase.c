/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:24:25 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/10 10:09:48 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(97 <= str[i] && str[i] <= 122))
			return (0);
		i++;
	}
	return (1);
}

/*int main(){
	char str[] = "wvbwretAyt";
	printf("%d", ft_str_is_lowercase(str));
	return 0;
}*/
