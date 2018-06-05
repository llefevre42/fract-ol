/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/14 18:07:39 by llefevre          #+#    #+#             */
/*   Updated: 2017/10/15 18:28:26 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	tri_bur(t_tri *lst, char **str, int i)
{
	generation(lst, i, str);
	tracer_burn(lst);
	mlx_put_image_to_window(lst->mlx, lst->win, lst->pt_img, 0, 0);
	setup_interface_burn(lst);
	mlx_hook(lst->win, 2, (1L << 0), my_key_funct, lst);
	mlx_hook(lst->win2, 2, (1L << 0), my_key_funct, lst);
	mlx_mouse_hook(lst->win, zoom, lst);
	mlx_mouse_hook(lst->win2, put_mousse, lst);
}

void	tri_man(t_tri *lst, char **str, int i)
{
	lst->v1 = 0;
	lst->v2 = 0;
	generation(lst, i, str);
	tracer_man(lst);
	mlx_put_image_to_window(lst->mlx, lst->win, lst->pt_img, 0, 0);
	setup_interface_mandel(lst);
	mlx_hook(lst->win, 2, (1L << 0), my_key_funct, lst);
	mlx_hook(lst->win2, 2, (1L << 0), my_key_funct, lst);
	mlx_mouse_hook(lst->win, zoom, lst);
	mlx_mouse_hook(lst->win2, put_mousse, lst);
}

void	tri_jul(t_tri *lst, char **str, int i)
{
	lst->v1 = 0.285;
	lst->v2 = 0.01;
	generation(lst, i, str);
	tracer_jul(lst);
	mlx_put_image_to_window(lst->mlx, lst->win, lst->pt_img, 0, 0);
	setup_interface_julia(lst);
	mlx_hook(lst->win, 2, (1L << 0), my_key_funct, lst);
	if (lst->moove == 0)
		mlx_hook(lst->win, 6, 3, key_moove, lst);
	mlx_hook(lst->win2, 2, (1L << 0), my_key_funct, lst);
	mlx_mouse_hook(lst->win, zoom, lst);
	mlx_mouse_hook(lst->win2, put_mousse, lst);
}
