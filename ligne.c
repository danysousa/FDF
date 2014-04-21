/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ligne.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa <dsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 12:19:15 by dsousa            #+#    #+#             */
/*   Updated: 2013/12/19 15:42:22 by dsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		ligne_a(t_env *e, t_xyz *point)
{
	int 	d;
	int		xincr;
	int 	x;
	int 	y;

	if (point->y1 > point->y2)
		change(&point->x1, &point->x2, &point->y1, &point->y2);
	xincr = point->x2 > point->x1 ? 1 : -1;
	d = 2 * ft_abs(point->x2 - point->x1) - (point->y2 - point->y1);
	x = point->x1;
	y = point->y1;
	verif_print(e, x, y);
	while (y++ <= point->y2)
	{
		if (d >= 0)
		{
			x += xincr;
			d += 2 * (ft_abs(point->x2 - point->x1) - (point->y2 - point->y1));
		}
		else
			d = d + 2 * ft_abs(point->x2 - point->x1);
		verif_print(e, x, y);
	}
}
static void		ligne_b(t_env *e, t_xyz *point)
{
	int 	d;
	int 	yincr;
	int 	x;
	int		y;

	if (point->x1 > point->x2)
		change(&point->x1, &point->x2, &point->y1, &point->y2);
	yincr = point->y2 > point->y1 ? 1 : -1;
	d = 2 * ft_abs(point->y2 - point->y1) - (point->x2 - point->x1);
	x = point->x1;
	y = point->y1;
	verif_print(e, x, y);
	while (x++ <= point->x2)
	{
		if (d >= 0)
		{
			y += yincr;
			d += 2 * (ft_abs(point->y2 - point->y1) - (point->x2 - point->x1));
		}
		else
			d = d + 2 * ft_abs(point->y2 - point->y1);
		verif_print(e, x, y);
	}
}

void			ligne(t_env *e, t_xyz *point)
{
	if (ft_abs(point->x2 - point->x1) < ft_abs(point->y2 - point->y1))
		ligne_a(e, point);
	else
		ligne_b(e, point);
}
