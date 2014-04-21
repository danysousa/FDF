/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa <dsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 19:18:58 by dsousa            #+#    #+#             */
/*   Updated: 2013/12/19 14:24:32 by dsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	n;

	len = 0;
	while (len < size && *dest && *(dest++))
		len++;
	n = size - len;
	if (!n)
		return (len + ft_strlen(src));
	while (*src)
	{
		if (n != 1)
		{
			*(dest++) = *src;
			n--;
		}
		src++;
		len++;
	}
	*dest = '\0';
	return (len);
}
