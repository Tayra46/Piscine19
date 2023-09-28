/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:50:08 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/10 14:03:27 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (65 <= str[i] && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/* int main(){
	char str[] = "asIUYTFDds33456df'p[";
	printf("%s", ft_strlowcase(str));
	return 0;
}*/
