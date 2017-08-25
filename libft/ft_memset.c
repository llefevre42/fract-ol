/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 21:29:53 by llefevre          #+#    #+#             */
/*   Updated: 2017/04/27 22:35:41 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*str;
	unsigned char	nb;
	int				i;

	i = 0;
	str = b;
	nb = (unsigned char)c;
	while (len > 0)
	{
		str[i] = c;
		i++;
		len--;
	}
	return ((void*)b);
}
