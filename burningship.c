/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buddhabrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 19:21:31 by llefevre          #+#    #+#             */
/*   Updated: 2017/08/29 07:31:46 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	tracer_burn(t_tri *lst)
{
	double x;
	double	y;
	double	x1;
	double	y1;
	double	t;
	double	r;
	double	ri;
	long int	i;

	put_in_black(lst);
	i = 0;
	x = 0.0;
	y = 0.0;
	while(x < 1000)
	{
		while( y < 1000)
		{
			lst->color = lst->swap_color;
			x1 = (x - lst->rv1) / lst->zoom;
			y1 = (y - lst->rv2) / lst->zoom; 
			r = x1;
			ri = y1;
			i = 0;
			while ((r * r + ri * ri) < 4 && i < lst->iter)
			{
				t = ri;
				ri = fabs((double)(r * ri) + (r * ri) + y1);
				r = fabs((double)((r * r) - (t * t)) + x1);
				i++;
			}
			put_in_color(x, y, i, lst);
			y++;
		}
		x++;
		y = 0;
	}
}
