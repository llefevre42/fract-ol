/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 16:32:17 by llefevre          #+#    #+#             */
/*   Updated: 2017/05/04 17:29:56 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		reduc(const char *s, char c)
{
	int i;
	int d;

	i = 0;
	d = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i] != '\n')
		{
			d++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (d);
}

static void		ft_reduc2(char ***j, int i, const char *s, char c)
{
	int w;
	int d;
	int o;

	o = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		w = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		j[0][o] = (char *)malloc((i - w + 1) * sizeof(char));
		d = -1;
		while (++d < i - w)
			j[0][o][d] = s[w + d];
		j[0][o][d] = '\0';
		o++;
	}
	if (s[i - 1] != c)
		j[0][o] = 0;
	else
		j[0][o - 1] = 0;
}

char			**ft_strsplit(char const *s, char c)
{
	char	**j;
	int		i;
	int		o;

	if (!(s))
		return (0);
	o = reduc(s, c);
	if (!(j = (char **)malloc((o + 1) * sizeof(char*))))
		return (NULL);
	i = 0;
	ft_reduc2(&j, i, s, c);
	return (j);
}
