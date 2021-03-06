/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsousa <dsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 07:12:44 by dsousa            #+#    #+#             */
/*   Updated: 2013/12/19 14:22:04 by dsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*node;
	t_list	*tmp;

	node = *alst;
	if (alst && *alst && (*del))
	{
		while (node)
		{
			tmp = node;
			node = node->next;
			(*del)(tmp->content, tmp->content_size);
			free(tmp);
		}
		*alst = NULL;
	}
}
