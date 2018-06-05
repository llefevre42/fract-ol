/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 16:55:49 by llefevre          #+#    #+#             */
/*   Updated: 2017/10/15 17:17:42 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	tracer_jul(t_tri *lst)
{
	long double	x;
	long double	y;
	long double	y1;
	long int	i;

	put_in_black(lst);
	x = 0.0;
	y = 0.0;
	while (x < 1000)
	{
		while (y < 1000)
		{
			lst->color = lst->swap_color;
			y1 = lst->v2;
			i = jul_algo(x, y, y1, lst);
			y++;
		}
		x++;
		y = 0;
	}
}

int		jul_algo(long double x, long double y, long double y1, t_tri *lst)
{
	long double	ri;
	long double	r;
	long double	t;
	long int	i;
	long double	x1;

	i = 0;
	x1 = lst->v1;
	r = (x - lst->rv1) / lst->zoom;
	ri = (y - lst->rv2) / lst->zoom;
	while ((r * r + ri * ri) < 4 && i < lst->iter)
	{
		t = r;
		r = (r * r) - (ri * ri) + x1;
		ri = ((2 * ri) * t) + y1;
		i++;
	}
	put_in_color(x, y, i, lst);
	return (i);
}
