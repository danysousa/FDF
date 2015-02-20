/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa <dsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 14:14:51 by dsousa            #+#    #+#             */
/*   Updated: 2015/02/20 14:55:23 by dsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdio.h>
#include "fdf.h"
#include "libft/libft.h"

void			calcul_point(t_xyz *point, char **line, int x, int y)
{
	point->x2 = ZOOM * x + ZOOM * y + ORIGINE_X;
	point->y2 = ORIGINE_Y - (ZOOM * x) / 3 + (ZOOM * y) / 3;
	point->y2 -= 2 * ft_atoi(line[x]);
}

void			verif_print(t_env *e, int x, int y)
{
	if (x >= 0 && x <= W_WIDTH && y >= 0 && y <= W_HEIGHT)
		mlx_pixel_put(e->mlx, e->win, x, y, 0x1797CF);
}

void			change(int *x1, int *y1, int *x2, int *y2)
{
	int		t;

	t = *x1;
	*x1 = *y1;
	*y1 = t;
	t = *x2;
	*x2 = *y2;
	*y2 = t;
}

int				ft_abs(int x)
{
	if (x < 0)
		x = x * (-1);
	return (x);
}

int				read_line(int fd, char **line, t_env *e)
{
	int			ret;
	char		**map;

	ret = get_next_line(fd, line);
	if (!*line || ret <= 0)
		return (ret);
	if (e->map)
	{
		map = ft_cpytab(e->map, e->len_map + 1);
		map[e->len_map] = NULL;
		ft_freetab((void **)e->map);
		e->map = ft_cpytab(map, e->len_map + 2);
		e->map[e->len_map] = ft_strdup(*line);
		e->map[e->len_map + 1] = NULL;
		ft_freetab((void **)map);
		e->len_map++;
		return (ret);
	}
	e->map = (char **)ft_memalloc(sizeof(char *) * 2);
	e->map[0] = ft_strdup(*line);
	e->map[1] = NULL;
	e->len_map++;
	return (ret);
}
