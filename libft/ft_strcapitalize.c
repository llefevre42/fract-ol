/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 22:24:00 by llefevre          #+#    #+#             */
/*   Updated: 2017/04/29 22:25:35 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i++] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' \
			&& str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			i++;
		}
		i++;
	}
	return (str);
}
