/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 22:14:36 by llefevre          #+#    #+#             */
/*   Updated: 2017/08/29 10:48:01 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	generation(t_tri *lst, int i, char **av)
{
	int trash1;
	int trash2;
	int trash3;

	lst->win/*[i]*/ = mlx_new_window(lst->mlx, 1000, 1000, av[1]);
	lst->pt_img/*[i]*/ = mlx_new_image(lst->mlx, 1000, 1000);
	lst->img/*[i]*/ = (unsigned \
		int *)mlx_get_data_addr(lst->pt_img, &trash1, &trash2, &trash3);
}

void	tri_map(t_tri *lst, char **str, int i)
{
	if(ft_strcmp(str[i], "burningship") == 0)
	{
		generation(lst, i, str);
		tracer_burn(lst);
		setup_interface_burn(lst);
		mlx_hook(lst->win, 2, (1L << 0), my_key_funct, lst);
		mlx_hook(lst->win2, 2, (1L << 0), my_key_funct, lst);
		mlx_mouse_hook(lst->win, zoom, lst);
		mlx_mouse_hook(lst->win2, put_mousse, lst);
	}
	else if(ft_strcmp(str[i], "mandelbrot") == 0)
	{
		lst->v1 = 0;
		lst->v2 = 0;
		generation(lst, i, str);
		tracer_man(lst);
		setup_interface_mandel(lst);
		mlx_hook(lst->win, 2, (1L << 0), my_key_funct, lst);
		mlx_hook(lst->win2, 2, (1L << 0), my_key_funct, lst);
		mlx_mouse_hook(lst->win, zoom, lst);
		mlx_mouse_hook(lst->win2, put_mousse, lst);
//	mlx_put_image_to_window(lst->mlx, lst->win, lst->pt_img, 0, 0);
	}
	else if(ft_strcmp(str[i], "julia") == 0)
	{
		lst->v1 = 0.285;
		lst->v2 = 0.01;
		generation(lst, i, str);
		tracer_jul(lst);
		setup_interface_julia(lst);
		mlx_hook(lst->win, 2, (1L << 0), my_key_funct, lst);
		mlx_hook(lst->win2, 2, (1L << 0), my_key_funct, lst);
		mlx_mouse_hook(lst->win, zoom, lst);
		mlx_mouse_hook(lst->win2, put_mousse, lst);
//	mlx_put_image_to_window(lst->mlx, lst->win, lst->pt_img, 0, 0);
	}
	else
		ft_error(0);
}

void	ft_error(int i)
{
	if (i == 0)
	{
		ft_putstr("error\n");
		exit(1);
	}
}

int		main(int ac, char **av)
{
	t_tri lst;
	int i;

	lst.av = av[1];
	lst.color = 0X00FF00;
	lst.swap_color = 0X00FF00;
	lst.haut = 0;
	lst.haut1 = 0;
	lst.droite = 0;
	lst.droite1 = 0;
	lst.mx = 1000;
	lst.my = 1000;
	lst.rv1 = 500;
	lst.rv2 = 500;
	lst.nb_zoom = 1;
	lst.zoom = 250;
	lst.iter = 50;
	i = 1;
	if(ac < 2)
		ft_error(0);
	lst.mlx = mlx_init();
	tri_map(&lst, av, i);
	mlx_loop(lst.mlx);
	return(0);
}
