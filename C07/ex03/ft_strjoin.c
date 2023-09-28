/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 08:33:21 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/14 20:40:12 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

char	*ft_strcpy(char *dest, char *src, int a)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i + a] = src[i];
	dest[i + a] = 0;
	return (dest);
}

int	get_total_len(char **strs, char *sep, int size)
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (++i < size)
		count += ft_strlen(strs[i]);
	if (size > 0)
		count += (size - 1) * ft_strlen(sep);
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		count;
	char	*dest;

	count = get_total_len(strs, sep, size);
	dest = malloc((count + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = -1;
	count = 0;
	while (++i < size)
	{
		ft_strcpy(dest, strs[i], count);
		count += ft_strlen(strs[i]);
		if (i < size -1)
		{
			ft_strcpy(dest, sep, count);
			count += ft_strlen(sep);
		}
	}
	dest[count] = '\0';
	return (dest);
}

/*int	main(){
	char c1[] = "hello,";
	char c2[] = "how are you today";
	char c3[] = "?";
	char sep[] = "-- --";
	char *strs[3];
	char *tab;
	strs[0] = c1;
	strs[1] = c2;
	strs[2] = c3;
	tab = ft_strjoin(3, strs, sep);
	printf("%s\n", tab);
	printf("%d\n", ft_strlen(tab));
	free(tab);
}*/
