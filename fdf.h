/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa <dsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 12:27:45 by dsousa            #+#    #+#             */
/*   Updated: 2015/02/20 15:01:01 by dsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# define ZOOM 2
# define ORIGINE_X 300
# define ORIGINE_Y 600
# define W_WIDTH 2000
# define W_HEIGHT 1200

typedef struct	s_env
{
	void		*mlx;
	void		*win;
	char		*argv;
	char		**map;
	int			len_map;
	int			map_created;
}				t_env;

typedef struct	s_xyz
{
	int			x1;
	int			x2;
	int			y1;
	int			y2;
	int			h1;
	int			h2;
}				t_xyz;

void			ligne(t_env *e, t_xyz *point);
void			reader(int fd, t_env *e);
void			verif_print(t_env *e, int x, int y);
void			change(int *x1, int *y1, int *x2, int *y2);
int				ft_abs(int x);
int				ft_tablen(char **tbl);
char			**ft_dubtbl(char **tbl);
int				read_line(int fd, char **line, t_env *e);
void			expose_draw(t_env *e);
void			calcul_point(t_xyz *point, char **line, int x, int y);

#endif
