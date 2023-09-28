/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:17:09 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/10 10:08:37 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(48 <= str[i] && str[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}

/*int main(){
	char str[] = "0987wvb@5";
	printf("%d", ft_str_is_numeric(str));
	return 0;
}*/
