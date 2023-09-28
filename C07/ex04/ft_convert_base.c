/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:59:22 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/21 17:59:28 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		checkbase(char *base);
void	ft_create_nbr_base(int nbr, char *base, char *ptr, int *index);

int	find_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	long int	wich_sign;
	long int	nbr;
	int			i;

	wich_sign = 1;
	i = 0;
	nbr = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			wich_sign = -wich_sign;
		i++;
	}
	while (str[i])
	{
		if (find_index(str[i], base) == -1)
			return (nbr * wich_sign);
		nbr = (nbr * ft_strlen(base)) + find_index(str[i], base);
		i++;
	}
	return (nbr * wich_sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		decimal;
	char	*ptr;
	int		i;

	if (checkbase(base_to) == 1 || checkbase(base_from) == 1)
		return (0);
	i = 0;
	ptr = malloc(34 * sizeof(char));
	decimal = ft_atoi_base(nbr, base_from);
	ft_create_nbr_base(decimal, base_to, ptr, &i);
	ptr[i] = 0;
	return (ptr);
}
