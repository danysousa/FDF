/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa <dsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 12:44:06 by dsousa            #+#    #+#             */
/*   Updated: 2013/12/19 14:22:35 by dsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *begin)
{
	t_list	*node;
	int		i;

	i = 0;
	node = begin;
	while (node)
	{
		node = node->next;
		i++;
	}
	return (i);
}
