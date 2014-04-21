/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa <dsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:20:54 by dsousa            #+#    #+#             */
/*   Updated: 2013/12/07 11:56:35 by dsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		total;
	int		is_neg;

	total = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if ((is_neg = *str == '-' ? -1 : 1) == -1 || *str == '+')
		str++;
	while (*str && ft_isdigit(*str))
		total = (total * 10) + (*str++ - '0');
	return (total * is_neg);
}
