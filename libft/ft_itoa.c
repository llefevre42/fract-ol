/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 10:41:48 by llefevre          #+#    #+#             */
/*   Updated: 2017/05/03 20:11:04 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		nbr_of_zero(int n)
{
	int i;

	i = 0;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

static void		empty_line(t_itoa *t, int n)
{
	int k;

	t->f[t->i] = '\0';
	t->i--;
	while (n > 9)
	{
		k = n % 10;
		n = n / 10;
		t->f[t->i] = k + '0';
		t->i--;
	}
	t->f[t->i] = n + '0';
	if (t->neg == 1)
		t->f[--(t->i)] = '-';
	if (t->min == 1)
	{
		t->i = ft_strlen(t->f) - 1;
		t->f[t->i] += 1;
	}
}

char			*ft_itoa(int n)
{
	t_itoa	t;

	t.neg = 0;
	t.min = 0;
	if (n < 0)
	{
		t.neg = 1;
		if (n == -2147483648)
		{
			n += 1;
			t.min = 1;
		}
		n *= -1;
	}
	t.i = nbr_of_zero(n);
	if (t.neg == 1)
		t.i++;
	if (!(t.f = (char *)malloc((t.i + 1) * sizeof(char))))
		return (NULL);
	empty_line(&t, n);
	return (t.f);
}
