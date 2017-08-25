/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 21:57:11 by llefevre          #+#    #+#             */
/*   Updated: 2017/04/28 15:04:34 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*f;

	i = 0;
	if (!(f = (char*)malloc((size + 1) * sizeof(char))))
		return (NULL);
	while (i <= size)
	{
		f[i] = '\0';
		i++;
	}
	return (f);
}
