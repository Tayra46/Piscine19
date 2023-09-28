/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:03:44 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/11 17:49:03 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	a;

	dest_len = 0;
	a = 0;
	while (dest[dest_len])
	{
		dest_len++;
	}
	while (src[a])
	{
		dest[dest_len + a] = src[a];
		a++;
	}
	dest[dest_len + a] = '\0';
	return (dest);
}

/*int	main(void)
{
	char src[] = "hey";
	char dest[30] = "";

	printf("%s", ft_strcat(dest, src));
	return 0;
}*/
