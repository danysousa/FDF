/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa <dsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:27:44 by dsousa            #+#    #+#             */
/*   Updated: 2013/12/19 14:23:05 by dsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	tmp[n];
	char	*s;

	i = 0;
	s = (char *)s1;
	while (i < n)
		tmp[i++] = *((char *)s2++);
	while (i--)
		s[i] = tmp[i];
	return (s1);
}
