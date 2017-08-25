/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_cub.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 17:35:59 by llefevre          #+#    #+#             */
/*   Updated: 2017/08/19 17:53:09 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		put_cub(long int x, long int y, t_tri *lst)
{
	long int x1;
	long int y1;

	y1 = y;
	x1 = x;
	while (y < y1 + 1)
	{
		x = x1;
		while (x < x1 + 1)
		{
			lst->img[x + ((y - 1) * 1000)] = lst->color;
			x++;
		}
		y++;
	}
	return (0);
}

int		put_cub_bis(int x, int y, t_tri *lst)
{
	int x1;
	int y1;

	y1 = y;
	x1 = x;
	while (y < y1 + lst->t2)
	{
		x = x1;
		while (x < x1 + lst->t1)
		{
			mlx_pixel_put(lst->mlx, lst->win2, x, y, lst->color);
			x++;
		}
		y++;
	}
	return (0);
}
