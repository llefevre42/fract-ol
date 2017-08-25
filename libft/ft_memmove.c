/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 22:21:56 by llefevre          #+#    #+#             */
/*   Updated: 2017/04/27 22:22:47 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*src2;
	char		*dst2;

	src2 = src;
	dst2 = dst;
	if (dst2 <= src2 || src2 >= (dst2 + len))
	{
		while (len--)
		{
			*dst2++ = *src2++;
		}
	}
	else
	{
		src2 = src2 + len - 1;
		dst2 = dst2 + len - 1;
		while (len--)
		{
			*dst2 = *src2;
			dst2--;
			src2--;
		}
	}
	return (dst);
}
