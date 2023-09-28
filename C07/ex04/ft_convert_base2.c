/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:59:07 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/21 17:59:12 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (1);
	return (0);
}

void	ft_create_nbr_base(int nbr, char *base, char *ptr, int *index)
{
	int			i;
	long int	n;
	int			blen;

	n = nbr;
	i = 0;
	blen = ft_strlen(base);
	if (n < 0)
	{
		ptr[*index] = '-';
		*index = *index + 1;
		n = -n;
	}
	if (n < blen)
	{
		ptr[*index] = base[n];
		*index = *index + 1;
	}
	else
	{
		ft_create_nbr_base(n / blen, base, ptr, index);
		ptr[*index] = base[n % blen];
		*index = *index + 1;
	}
}
