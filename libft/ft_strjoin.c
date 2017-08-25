/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 18:47:16 by llefevre          #+#    #+#             */
/*   Updated: 2017/04/27 22:41:34 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		l;
	char	*f;

	i = 0;
	if (!(s1 && s2))
		return (0);
	l = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	if (!(f = malloc((l + 1) * sizeof(char*))))
		return (NULL);
	l = 0;
	while (s1[i] != '\0')
		f[l++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		f[l++] = s2[i++];
	f[l] = '\0';
	return (f);
}
