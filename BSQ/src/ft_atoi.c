/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:24:36 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/27 14:24:39 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

int	ft_atoi(char *str, int len)
{
	int	i;
	int	rep;

	rep = 0;
	i = 0;
	while (48 <= str[i] && str[i] <= 57 && i <= len)
	{
		rep = (rep * 10) + (str[i] - '0');
		i++;
	}
	return (rep);
}
