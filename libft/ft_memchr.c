/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 22:20:20 by llefevre          #+#    #+#             */
/*   Updated: 2017/04/27 22:20:47 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	str;
	int				i;

	i = 0;
	str = (unsigned char)c;
	ptr = (unsigned char *)s;
	while (n--)
	{
		if (ptr[i] == str)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
