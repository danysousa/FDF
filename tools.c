/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa <dsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 14:14:51 by dsousa            #+#    #+#             */
/*   Updated: 2013/12/18 16:29:35 by dsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "fdf.h"
#include "libft/libft.h"

void			verif_print(t_env *e, int x, int y)
{
	if (x >= 0 && x <= 2000 && y >= 0 && y <= 1200)
		mlx_pixel_put(e->mlx, e->win, x, y, 0x1797CF);
}

void		change(int* x1, int* y1, int* x2, int* y2)
{
	int t;

	t = *x1;
	*x1 = *y1;
	*y1 = t;
	t = *x2;
	*x2 = *y2;
	*y2 = t;
}

int 		ft_abs(int x)
{
	if (x < 0)
		x = x * (- 1);
	return (x);
}
