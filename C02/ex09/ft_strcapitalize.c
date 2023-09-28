/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:54:18 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/11 12:04:36 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	minstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	minstr(str);
	while (str[i] != '\0')
	{
		if (!('A' <= str[i - 1] && str[i - 1] <= 'Z') && 
			!('a' <= str[i - 1] && str[i - 1] <= 'z') 
			&& !('0' <= str[i - 1] && str[i - 1] <= '9'))
			if ('a' <= str[i] && str[i] <= 'z')
				str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*int main(){
	char str[] = "SALUT, ComMEnt tu vas ? 42MoTs quarante-DeUx; cinquantE+Et+UN";
	printf("%s", ft_strcapitalize(str));
	return 0;
}*/
