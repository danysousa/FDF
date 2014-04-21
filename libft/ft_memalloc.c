/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa <dsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 18:38:09 by dsousa            #+#    #+#             */
/*   Updated: 2013/12/19 14:22:42 by dsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*s;
	size_t	i;

	i = 0;
	if ((s = (char *)malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	while (i < size)
		s[i++] = 0;
	return (s);
}
