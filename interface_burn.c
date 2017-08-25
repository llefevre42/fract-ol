/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interface_burn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 14:47:00 by llefevre          #+#    #+#             */
/*   Updated: 2017/07/26 23:44:55 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	suite_marge(t_tri *lst)
{
	lst->color = 0XBBC22C;
	lst->t1 = 110;
	lst->t2 = 100;
	put_cub_bis(20, 400, lst);
	lst->color = 0X1DA708;		//green		
	put_cub_bis(135, 400, lst);
	lst->color = 0X522376;		//purple
	put_cub_bis(135, 505, lst);
	lst->color = 0XEC7063;		//pink
	put_cub_bis(20, 505, lst);
}

void	next_marge(t_tri *lst)
{
	lst->color = 0XFAA035;		//orange
	put_cub_bis(255, 400, lst);
	lst->color = 0XEA89B2;
	put_cub_bis(370, 400, lst);
	lst->color = 0X38148E;
	put_cub_bis(255, 505, lst);
	lst->color = 0X292121;		//black
	put_cub_bis(370, 505, lst);
	lst->color = 0X292121;
	lst->t1 = 20;
	lst->t2 = 20;
	put_cub_bis(20, 20, lst);
	mlx_string_put(lst->mlx, lst->win2, 25, 18, 0X000000, "X");
	mlx_string_put(lst->mlx, lst->win2, 185, 140, 0X00FF00, "ZOOM +");
	lst->t1 = 50;
	lst->t2 = 50;
	put_cub_bis(195, 170, lst);
	mlx_string_put(lst->mlx, lst->win2, 260, 140, 0X00FF00, "ZOOM -");
	put_cub_bis(255, 170, lst);
	mlx_string_put(lst->mlx, lst->win2, 200, 240, 0X00FF00, "DIRECTION");
	put_cub_bis(220, 270, lst);
	put_cub_bis(220, 330, lst);
	put_cub_bis(160, 330, lst);
	put_cub_bis(280, 330, lst);
}

void	last_marge(t_tri *lst)
{
	mlx_string_put(lst->mlx, lst->win2, 205, 670, 0X00FF00, "Iter 100");
	put_cub_bis(220, 700, lst);
	put_cub_bis(220, 760, lst);
	mlx_string_put(lst->mlx, lst->win2, 105, 670, 0X00FF00, "Iter 10");
	put_cub_bis(120, 700, lst);
	put_cub_bis(120, 760, lst);
	mlx_string_put(lst->mlx, lst->win2, 305, 670, 0X00FF00, "Iter 1000");
	put_cub_bis(320, 700, lst);
	put_cub_bis(320, 760, lst);
	lst->t1 = 20;
	lst->t2 = 20;
	lst->color = 0XFFFF00;
	put_cub_bis(445, 20, lst);
	lst->color = 0XFFFFFF;
	mlx_string_put(lst->mlx, lst->win2, 425, 40, 0X00FF00, "RESET");
}

void	setup_interface_burn(t_tri *lst)
{
	lst->win2 = mlx_new_window(lst->mlx, 500, 1000, "burn");
	lst->color = 0XF39C12;
	lst->t1 = 500;
	lst->t2 = 15;
	put_cub_bis(0, 0, lst);
	put_cub_bis(0, 985, lst);
	lst->t1 = 15;
	lst->t2 = 1000;
	put_cub_bis(0, 0, lst);
	put_cub_bis(485, 0, lst);
	lst->t1 = 10;
	lst->t2 = 60;
	mlx_string_put(lst->mlx, lst->win2, 215, 40, 0XFFFFFF, "Fract'ol");
	mlx_string_put(lst->mlx, lst->win2, 195, 60, 0XFF0000, "BURNING SHIP");
	suite_marge(lst);
	next_marge(lst);
	last_marge(lst);
}
