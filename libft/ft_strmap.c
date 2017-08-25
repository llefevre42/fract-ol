/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 22:14:06 by llefevre          #+#    #+#             */
/*   Updated: 2017/04/28 15:01:40 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		j[i] = (*f)(s[i]);
		i++;
	}
	j[i] = '\0';
	return (j);
}
