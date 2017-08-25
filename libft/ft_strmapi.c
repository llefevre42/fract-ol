/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 11:35:42 by llefevre          #+#    #+#             */
/*   Updated: 2017/04/28 15:02:26 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		o;
	char	*j;

	i = 0;
	if (!s || !f)
		return (0);
	o = ft_strlen((char *)s);
	if (!(j = (char*)malloc((o + 1) * sizeof(char))))
		return (NULL);
	while (s[i])
	{
		j[i] = (*f)(i, s[i]);
		i++;
	}
	j[i] = '\0';
	return (j);
}
