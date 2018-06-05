/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 22:14:36 by llefevre          #+#    #+#             */
/*   Updated: 2017/10/17 17:53:37 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	generation(t_tri *lst, int i, char **av)
{
	int trash1;
	int trash2;
	int trash3;

	lst->win = mlx_new_window(lst->mlx, 1000, 1000, av[1]);
	lst->pt_img = mlx_new_image(lst->mlx, 1000, 1000);
	lst->img = (unsigned \
		int *)mlx_get_data_addr(lst->pt_img, &trash1, &trash2, &trash3);
}

void	tri_map(t_tri *lst, char **str, int i)
{
	if (ft_strcmp(str[i], "burningship") == 0)
		tri_bur(lst, str, i);
	else if (ft_strcmp(str[i], "mandelbrot") == 0)
		tri_man(lst, str, i);
	else if (ft_strcmp(str[i], "julia") == 0)
		tri_jul(lst, str, i);
	else
		ft_error(0);
}

void	ft_error(int i)
{
	if (i == 0)
	{
		ft_putstr("option list :\n- julia\n- burningship\n- mandelbrot\n");
		exit(1);
	}
}

int		main(int ac, char **av)
{
	t_tri	lst;
	int		i;

	lst.av = av[1];
	lst.color = 0X00FF00;
	lst.swap_color = 0X00FF00;
	lst.haut = 0;
	lst.moove = 0;
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
	if (ac != 2)
		ft_error(0);
	lst.mlx = mlx_init();
	tri_map(&lst, av, i);
	mlx_loop(lst.mlx);
	return (0);
}
