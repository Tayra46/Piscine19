/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:40:44 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/19 21:22:53 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	get_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s_len;
	unsigned int	d_len;
	unsigned int	i;

	s_len = get_str_len(src);
	d_len = get_str_len(dest);
	i = 0;
	if (size <= d_len || size == 0)
		return (size + s_len);
	while (src[i] != '\0' && i < size - d_len - 1)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (d_len + s_len);
}

/*#include <stdio.h>

int	main(void)
{
	char src[] = "Hello";
	char dest[] = "hello world";
	
	printf("%d\n", ft_strlcat(dest, src, 4));
	printf("%s\n", dest);
	return 0;
}*/
