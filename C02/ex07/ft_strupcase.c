/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:37:05 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/10 10:11:54 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (97 <= str[i] && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*int main(){
	char str[] = "asdftyjngfds";
	printf("%s", ft_strupcase(str));
	return 0;
}*/
