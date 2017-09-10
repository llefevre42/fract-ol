/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 16:55:49 by llefevre          #+#    #+#             */
/*   Updated: 2017/08/29 10:47:19 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	tracer_man(t_tri *lst)
{
	long double	x;
	long double	y;
	long double	x1;
	long double	y1;
	long double	t;
	long double	r;
	long double	ri;
	long int	i;

	printf("%Lf\n", lst->iter);
	put_in_black(lst);
	x = 0.0;
	y = 0.0;
	while(x < 1000)
	{
		while( y < 1000)
		{
			lst->color = lst->swap_color;
			x1 = (x - lst->rv1) / lst->zoom;		
			y1 = (y - lst->rv2) / lst->zoom;
			r = 0;///*-0.70176 * -0.70176;*/ lst->v2;
			ri = 0;///*-0.3842 * -0.3842;*/ lst->v1;
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
