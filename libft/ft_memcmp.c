/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa <dsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:31:25 by dsousa            #+#    #+#             */
/*   Updated: 2013/12/19 14:22:54 by dsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n && *((unsigned char *)s1) == *((unsigned char *)s2))
		return (ft_memcmp(s1 + 1, s2 + 1, n - 1));
	if (n)
		return (*((unsigned char *)s1) - *((unsigned char *)s2));
	return (0);
}
