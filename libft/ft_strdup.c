/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 13:24:29 by llefevre          #+#    #+#             */
/*   Updated: 2017/04/11 15:59:43 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*j;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (src == NULL)
		return (NULL);
	if (!(j = (malloc(sizeof(char) * (i + 1)))))
		return (NULL);
	i = 0;
	while (src[i])
	{
		j[i] = src[i];
		i++;
	}
	j[i] = src[i];
	return (j);
}
