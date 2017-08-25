/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 18:58:05 by llefevre          #+#    #+#             */
/*   Updated: 2017/04/28 15:00:04 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*f;

	k = 0;
	i = 0;
	if (!(s))
		return (0);
	j = ft_strlen((char *)s);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	j--;
	while ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n') && j > i)
		j--;
	if (j - i + 1 < 0 || !(f = malloc((j - i + 2) * sizeof(char))))
		return (NULL);
	while (i <= j)
		f[k++] = s[i++];
	f[k] = '\0';
	return (f);
}
