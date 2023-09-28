/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:33:52 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/12 13:31:27 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	rep;
	int	num_min;

	num_min = 0;
	rep = 0;
	i = 0;
	while (str[i] == ' ' | str[i] == '\t' | str[i] == '\n' | str[i] == '\v' 
		| str[i] == '\f' | str[i] == '\r')
		i++;
	while (str[i] == '-' | str[i] == '+')
	{
		if (str[i] == '-')
			num_min++;
		i++;
	}
	while (48 <= str[i] && str[i] <= 57)
	{
		rep = (rep * 10) + (str[i] - '0');
		i++;
	}
	if (num_min % 2 == 1)
		return (-rep);
	else
		return (rep);
}

/*int	main()
{
	char str[] = " \n\t\f\v\r  ---+-+1234ab567";
	printf("%d", ft_atoi(str));
}*/
