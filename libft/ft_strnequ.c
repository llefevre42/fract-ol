/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 11:08:22 by llefevre          #+#    #+#             */
/*   Updated: 2017/04/13 22:01:14 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (1);
	if (s1 && s2)
	{
		while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		{
			if (s1[i] == s2[i])
				i++;
			else
				return (0);
		}
		if (s1[i] == s2[i])
			return (1);
	}
	return (0);
}
