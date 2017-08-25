/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 22:13:43 by llefevre          #+#    #+#             */
/*   Updated: 2017/04/28 15:10:51 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	size_t			k;

	i = 0;
	j = 0;
	k = ft_strlen((char *)src);
	while (dst[i] && i < size)
		i++;
	if (size > 0)
		while (src[j] && i < size - 1)
			dst[i++] = src[j++];
	if (j > 0)
	{
		dst[i] = 0;
		return (k + i - j);
	}
	return (k + i);
}
