/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 17:09:15 by llefevre          #+#    #+#             */
/*   Updated: 2017/04/28 14:49:04 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*j;
	size_t	i;

	i = 0;
	if (!(s))
		return (0);
	if (!(j = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (i < len)
		j[i++] = s[start++];
	j[i] = '\0';
	return (j);
}
