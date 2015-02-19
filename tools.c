/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa <dsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 14:14:51 by dsousa            #+#    #+#             */
/*   Updated: 2015/02/19 17:42:27 by dsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdio.h>
#include "fdf.h"
#include "libft/libft.h"

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

int				ft_tablen(char **tbl)
{
	int		i;

	if (tbl == NULL)
		return(0);

	i = 0;
	while (tbl[i])
		i++;

	return (i);
}

char			**ft_dubtbl(char **tbl)
{
	char			**result;
	int				len;
	int				i;

	i = 0;
	len = ft_tablen(tbl);
	result = (char **)ft_memalloc(sizeof(char *) * len);
	ft_putnbr(len);
	while (i < len)
	{
		result[i] = ft_strdup(tbl[i]);
		i++;
	}
	return (result);
}

int				read_line(int fd, char **line, t_env *e)
{
	int			ret;
	char		**map;
	int			i;

	i = 0;
	ret = get_next_line(fd, line);
	if (!*line || ret <= 0)
		return (ret);
	if (e->map)
	{
		puts(*e->map);
		map = ft_dubtbl(e->map);
		while (e->map && e->map[i])
			free(e->map[i++]);
		if (e->map)
			free(e->map);
		e->map = ft_dubtbl(map);
		e->map[i] = ft_strdup(*line);
		i = 0;
		while (map[i])
			free(map[i++]);
		free(map);
		return (ret);
	}
	e->map = (char **)ft_memalloc(sizeof(char *));
	e->map[0] = ft_strdup(*line);
	return (ret);
}
