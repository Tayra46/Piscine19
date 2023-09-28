/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:31:34 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/10 10:11:12 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(32 <= str[i] && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

/*int main(){
	char str[] = "0987wvb@5";
	printf("%d", ft_str_is_printable(str));
	return 0;
}*/
