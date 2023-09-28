/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:34:29 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/10 17:01:15 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				end;

	end = 0;
	i = -1;
	while (++i < n)
	{
		if (src[i] == '\0')
			end = 1;
		if (end == 1)
		{
			dest[i] = '\0';
		}
		else
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}

/*int main(){
	char src[] = "Hello World";
	char dest[12];
	int n = 11;

	ft_strncpy(dest, src, n);

	printf("les %d premiers char de %s : %s", n, src, dest);
	return 0;
}*/
