/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freetab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa <dsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/27 11:26:39 by rbenjami          #+#    #+#             */
/*   Updated: 2015/02/20 14:41:26 by dsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_freetab(void **tab)
{
	int		i;

	if (tab)
	{
		i = ft_tabsize(tab);
		i--;
		while (i >= 0)
		{
			free(tab[i]);
			i--;
		}
		free(tab);
	}
}
