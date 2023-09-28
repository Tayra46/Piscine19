/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:25:10 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/19 21:09:57 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	b;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	if (get_str_len(to_find) > get_str_len(str))
		return (0);
	while (str[i])
	{
		b = 0;
		if (str[i] == to_find[b])
		{
			while ((to_find[b] == str[b + i]) | (to_find[b] == '\0'))
			{
				if (to_find[b] == '\0')
					return (&str[i]);
				b++;
			}
		}
		i++;
	}
	return (0); 
}

/*#include <stdio.h>

int	main()
{
	char str[] = "this is a test sentence";
	char to_find[] = "hello how are you today ?";
	printf("%s", ft_strstr(str, to_find));
	return 0;
}*/
