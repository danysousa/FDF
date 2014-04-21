/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa <dsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:34:21 by dsousa            #+#    #+#             */
/*   Updated: 2013/12/19 14:25:13 by dsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*cc;

	cc = NULL;
	while (*s)
	{
		if (*s == (char)c)
			cc = (char *)s;
		s++;
	}
	if (*s == (char)c)
		cc = (char *)s;
	return (cc);
}
