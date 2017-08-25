/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 21:36:36 by llefevre          #+#    #+#             */
/*   Updated: 2017/04/13 21:35:51 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*f;

	i = 0;
	if (!(f = (void*)malloc((size) * sizeof(void*))))
		return (NULL);
	ft_bzero(f, size);
	return (f);
}
