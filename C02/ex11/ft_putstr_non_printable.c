/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 08:35:35 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/19 13:43:35 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

void	hexadecimalize(int i)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (i > 16)
	{
		hexadecimalize(i / 10);
		hexadecimalize(i % 10);
	}
	else
		ft_putchar(hex[i]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 31 || str[i] > 126)
		{
			ft_putchar('\\');
			if ((unsigned char)str[i] < 16)
				ft_putchar('0');
			hexadecimalize((unsigned char)str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

/*int	main(void){
	char str[] = "\a\r\f\3\4\n\f\213";
	ft_putstr_non_printable(str);
	return 0;
}*/
