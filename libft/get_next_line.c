/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa <dsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 15:47:38 by dsousa            #+#    #+#             */
/*   Updated: 2015/02/17 15:59:02 by dsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

static size_t	ft_strlento(char *str)
{
	size_t		i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	return (i);
}

static char		*ft_strcpyto(char *dest, char *src)
{
	size_t		i;

	i = 0;
	while (src[i] != '\n')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (&src[i + 1]);
}

static int		ft_end_line(char **save, char **line)
{
	if (*save)
	{
		if (!(*line = (char *)malloc(ft_strlen((char *)save) + 1)))
			return (-1);
		*line = *save;
		*save = NULL;
		return (1);
	}
	else
		return (0);
}

int				get_next_line(int fd, char **line)
{
	static char		*save;
	char			buff[BUF_SIZE + 1];
	char			*ret;
	static int		i = 1;

	if (i)
		ret = (save) ? ft_strdup(save) : ft_strnew(BUF_SIZE);
	else
		return (ft_end_line(&save, line));
	while (!ft_strchr(ret, '\n'))
	{
		if ((i = read(fd, buff, BUF_SIZE)) > 0)
		{
			buff[i] = '\0';
			ret = ft_strjoin(ret, buff);
		}
		else
			return (i);
	}
	if (!(*line = (char *)malloc(sizeof(char) * ft_strlento(ret) + 1)))
		return (-1);
	save = ft_strdup(ft_strcpyto(*line, ret));
	free(ret);
	return (1);
}
