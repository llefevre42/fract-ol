/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 15:52:41 by llefevre          #+#    #+#             */
/*   Updated: 2017/04/29 15:56:44 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*list;

	list = *alst;
	if (list)
	{
		tmp = list->next;
		del(list, list->content_size);
		list = tmp;
	}
	*alst = NULL;
}
