/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 22:19:36 by llefevre          #+#    #+#             */
/*   Updated: 2017/04/27 22:19:56 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int						i;
	unsigned char			*tmp1;
	const unsigned char		*tmp2;

	i = 0;
	tmp1 = dst;
	tmp2 = src;
	while (n > 0)
	{
		tmp1[i] = tmp2[i];
		if (tmp1[i] == (unsigned char)c)
			return (dst + 1 + i);
		i++;
		n--;
	}
	return (NULL);
}
