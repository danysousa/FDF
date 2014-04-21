/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa <dsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:38:49 by dsousa            #+#    #+#             */
/*   Updated: 2013/12/19 14:24:52 by dsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	if (!*s1 || !*s2 || (unsigned char)*s1 != (unsigned char)*s2)
		return (*s1 - *s2);
	else
		return (ft_strncmp(s1 + 1, s2 + 1, n - 1));
}
