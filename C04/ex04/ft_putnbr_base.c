/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:01:14 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/13 14:23:36 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	get_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	test_error(char *base)
{
	int	i;
	int	a;

	i = 0;
	if (get_str_len(base) == 1 | get_str_len(base) == 0)
		return ('n');
	while (base[i])
	{
		a = i + 1;
		while (base[a])
		{
			if (base[i] == base[a])
				return ('n');
			a++;
		}
		if (base[i] == '-' | base[i] == '+')
			return ('n');
		i++;
	}
	return ('y');
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	n;
	int			min;

	min = 0;
	n = nbr;
	if (nbr < 0)
	{
		ft_putchar('-');
		n = -n;
		min = 1;
	}
	if (test_error(base) == 'y')
	{
		if (n > (get_str_len(base) - 1))
		{
			ft_putnbr_base(n / get_str_len(base), base);
			ft_putnbr_base(n % get_str_len(base), base);
		}
		else
			ft_putchar(base[n]);
	}
}

/*int	main(void)
{
	char str[] = "0123456789";
	ft_putnbr_base(-2147483648, str);
}*/
