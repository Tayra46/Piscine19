/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:21:32 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/11 17:42:36 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				dest_len;
	unsigned int	a;

	dest_len = 0;
	a = 0;
	while (dest[dest_len])
	{
		dest_len++;
	}
	while (src[a] && a < nb)
	{
		dest[dest_len + a] = src[a];
		a++;
	}
	dest[dest_len + a] = '\0';
	return (dest);
}
/*int	main(void)
{
	char src[] = "how";
	char dest[30] = "hey, ";

	printf("%s\n", ft_strncat(dest, src, 6));
	return 0;
}*/
