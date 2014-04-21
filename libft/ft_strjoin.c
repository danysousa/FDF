/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa <dsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 06:14:01 by dsousa            #+#    #+#             */
/*   Updated: 2013/12/19 14:24:29 by dsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	r = malloc(sizeof (char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!r)
		return (NULL);
	i = 0;
	while (*s1)
		r[i++] = *(s1++);
	while (*s2)
		r[i++] = *(s2++);
	r[i] = '\0';
	return (r);
}
