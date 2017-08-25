/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 15:09:52 by llefevre          #+#    #+#             */
/*   Updated: 2017/04/13 22:25:35 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i > 0)
	{
		if (s[i] == (char)c)
			return ((char*)s + i);
		i--;
	}
	if (s[0] == (char)c)
		return ((char*)s + i);
	return (0);
}
