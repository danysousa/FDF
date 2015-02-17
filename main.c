/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa <dsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/16 15:11:23 by dsousa            #+#    #+#             */
/*   Updated: 2015/02/17 16:19:21 by dsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <mlx.h>
#include "fdf.h"
#include "libft/libft.h"

static int		expose_hook(t_env *e)
{
	int		fd;

	fd = open(e->argv, O_RDONLY);
	if (fd == -1)
	{
		perror(e->argv);
		exit(0);
	}
	reader(fd, e);
	return (0);
}

static int		key_hook(int keycode)
{
	if (keycode == 65307)
		exit(0);
	return (0);
}

int				main(int argc, char const *argv[])
{
	t_env	e;

	if (argc > 1)
	{
		e.mlx = mlx_init();
		e.win = mlx_new_window(e.mlx, W_WIDTH, W_HEIGHT, "fdf");
		e.argv = ft_strdup(argv[1]);
		mlx_key_hook(e.win, key_hook, &e);
		mlx_expose_hook(e.win, expose_hook, &e);
		mlx_loop(e.mlx);
	}
	else
		write(1, "usage : ./fdf file1\n", 21);
	return (0);
}
