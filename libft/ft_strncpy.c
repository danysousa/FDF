/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa <dsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 13:32:33 by dsousa            #+#    #+#             */
/*   Updated: 2013/12/19 14:24:55 by dsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	char	*s;

	s = s1;
	while (n--)
	{
		if (*s2)
			*(s1++) = *(s2++);
		else
			*(s1++) = '\0';
	}
	return (s);
}
