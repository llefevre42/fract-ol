/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 16:55:49 by llefevre          #+#    #+#             */
/*   Updated: 2017/08/25 01:26:24 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	tracer_jul(t_tri *lst)
{
	long double	x;
	long double	y;
	long double	x1;
	long double	y1;
	long double	t;
	long double	r;
	long double	ri;
	long int	i;

	put_in_black(lst);
	x = 0.0;
	y = 0.0;
	while(x < 1000)
	{
		while( y < 1000)
		{
			lst->color = 0XFF0000; 
			x1 = lst->v1;
			y1 = lst->v2;
			r = (x - lst->rv1) / lst->zoom;
			ri = (y - lst->rv2) / lst->zoom;
			i = 0;
			while ((r * r + ri * ri) < 4 && i < lst->iter)
			{
				t = r;
				r = (r * r) - (ri * ri) + x1;
				ri = ((2 * ri) * t) + y1;
				i++;
			}
			put_in_color(x, y, i, lst);
			y++;
		}
		x++;
		y = 0;
	}
}
