/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa <dsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 12:27:45 by dsousa            #+#    #+#             */
/*   Updated: 2014/04/21 14:02:52 by dsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# define ZOOM 50
# define ORIGINE_X 100
# define ORIGINE_Y 600



typedef struct s_env
{
	void	*mlx;
	void	*win;
	char	*argv;
}				t_env;

typedef struct s_xyz
{
	int		x1;
	int		x2;
	int		y1;
	int		y2;
	int		h1;
	int		h2;
}				t_xyz;

void			ligne(t_env *e, t_xyz *point);
void			reader(int fd, t_env *e);
void			verif_print(t_env *e, int x, int y);
void			change(int* x1, int* y1, int* x2, int* y2);
int 			ft_abs(int x);

#endif /* FDF_H */
