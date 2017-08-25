/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 16:05:04 by llefevre          #+#    #+#             */
/*   Updated: 2017/05/03 22:03:08 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_strlen_t(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char			*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int j;

	j = 0;
	i = 0;
	if (!(ft_strlen_t(to_find)))
		return ((char *)str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] && j < ft_strlen_t(to_find))
			{
				if (j == ft_strlen_t(to_find) - 1)
					return ((char *)str + i);
				j++;
			}
		}
		j = 0;
		i++;
	}
	return (0);
}
