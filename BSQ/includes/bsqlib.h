/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsqlib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 09:33:26 by hle-roi           #+#    #+#             */
/*   Updated: 2023/09/25 09:36:33 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQLIB_H
# define BSQLIB_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_coord
{
	int		x;
	int		y;
	char	content;
}	t_coord;

typedef struct s_square
{
	struct s_coord	corner1;
	struct s_coord	corner2;
}	t_square;

typedef struct s_param
{
	char	wall;
	char	blank;
	char	fill;
	int		size;
}	t_param;

/*---------- Proto ----------*/
t_coord		*read_map(char *filename, t_param *param, int f_len);
t_coord		*get_coords(int f_len, char *buff, int k);
void		print_map(t_coord *coords);
char		*read_standard_input(int line_number);
void		is_valid_file(char *str, t_param *param);
void		find_bsq(t_coord *coords, int *index, t_param param, t_square *bsq);
void		place_square(t_square bsq, t_coord *coords, t_param param);
t_coord		*get_modifiable_coord(int x, int y, t_coord *coords);
int			count_line(char *str, int start);
void		init_bsq(t_square *bsq);
void		ft_strjoin(char *src, char *dest);

/*---------- Utils ----------*/
void		ft_putchar(char c);
void		ft_putstr(char *str);
int			ft_atoi(char *str, int len);
int			ft_get_max_x(t_coord *coords);
int			ft_get_max_y(t_coord *coords);
int			ft_strlen(char *str);

#endif
