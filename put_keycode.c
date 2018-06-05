/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_keycode.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 04:43:39 by llefevre          #+#    #+#             */
/*   Updated: 2017/10/14 21:13:55 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		my_key_funct(int keycode, void *param)
{
	t_tri		*lst;

	lst = ((t_tri *)param);
	if (keycode == 53)
		exit(0);
	if (keycode == 75)
		lst->rv2 += 0.5;
	if (keycode == 67)
		lst->rv2 -= 0.5;
	if (keycode == 78)
		lst->rv1 += 0.5;
	if (keycode == 69)
		lst->rv1 -= 0.5;
	if (keycode == 31)
		lst->iter += 100;
	if (keycode == 37)
		lst->iter -= 100;
	if (keycode == 86)
		lst->v2 += 0.01;
	if (keycode == 83)
		lst->v2 -= 0.01;
	key_color(keycode, lst);
	reload(keycode, lst);
	return (0);
}

void	key_color(int keycode, t_tri *lst)
{
	if (keycode == 18 || keycode == 19 || keycode == 20 || keycode == 21 || \
			keycode == 23 || keycode == 22 || keycode == 26 || keycode == 28)
	{
		if (keycode == 18)
			lst->color = 0X38148E;
		if (keycode == 19)
			lst->color = 0XEC7063;
		if (keycode == 20)
			lst->color = 0X522376;
		if (keycode == 21)
			lst->color = 0X292121;
		if (keycode == 23)
			lst->color = 0XFAA035;
		if (keycode == 22)
			lst->color = 0X1DA708;
		if (keycode == 26)
			lst->color = 0XEA89B2;
		if (keycode == 28)
			lst->color = 0XBBC22C;
		lst->swap_color = lst->color;
	}
}

void	reload(int keycode, t_tri *lst)
{
	if (keycode == 88)
		lst->v1 += 0.005;
	if (keycode == 85)
		lst->v1 -= 0.005;
	if (keycode == 67 && lst->moove == 0)
		lst->moove = 1;
	else if (keycode == 67 && lst->moove == 1)
		lst->moove = 0;
	if (0 == ft_strcmp(lst->av, "burningship"))
	{
		tracer_burn(lst);
	}
	if (0 == ft_strcmp(lst->av, "mandelbrot"))
	{
		tracer_man(lst);
	}
	if (0 == ft_strcmp(lst->av, "julia"))
	{
		tracer_jul(lst);
	}
	mlx_put_image_to_window(lst->mlx, lst->win, lst->pt_img, 0, 0);
}
