/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 15:43:59 by llefevre          #+#    #+#             */
/*   Updated: 2017/05/03 22:03:27 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_tn(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char			*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (!(ft_strlen_tn(to_find)))
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		if (str[i] == to_find[j])
		{
			while ((str[i + j] == to_find[j] && j < ft_strlen_tn(to_find)) &&
					(i + j < len))
			{
				if (j == ft_strlen_tn(to_find) - 1)
					return ((char *)str + i);
				j++;
			}
		}
		j = 0;
		i++;
	}
	return (0);
}
