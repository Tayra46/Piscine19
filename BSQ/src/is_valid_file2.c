/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_file2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:26:50 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/27 14:26:53 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

int	count_line(char *str, int start)
{
	int	line_len;

	line_len = start;
	while (str[line_len] && str[line_len] != '\n')
		line_len++;
	return (line_len);
}
