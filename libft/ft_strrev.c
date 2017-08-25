/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 21:07:33 by llefevre          #+#    #+#             */
/*   Updated: 2017/04/29 22:24:06 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		l;
	char	str2;

	l = 0;
	i = 0;
	while (str[l] != '\0')
		l++;
	l--;
	while (i < l)
	{
		str2 = str[i];
		str[i] = str[l];
		str[l] = str2;
		i++;
		l--;
	}
	return (str);
}
