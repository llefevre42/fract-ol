/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 22:18:44 by llefevre          #+#    #+#             */
/*   Updated: 2017/04/27 22:19:22 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*src2;
	char	*dst2;
	int		i;

	i = 0;
	src2 = (char*)src;
	dst2 = (char*)dst;
	while (n > 0)
	{
		dst2[i] = src2[i];
		i++;
		n--;
	}
	return ((void*)dst);
}
