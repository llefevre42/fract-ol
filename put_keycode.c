/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_keycode.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 04:43:39 by llefevre          #+#    #+#             */
/*   Updated: 2017/08/29 08:26:07 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		my_key_funct(int keycode, void *param)
{
	t_tri *lst;
	long int i;

	lst = ((t_tri *)param);
	printf("keycode : %d\n", keycode);
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
	if (keycode == 35)
		lst->iter += 1000;
	if (keycode == 41)
		lst->iter -= 1000;
	if (keycode == 31)
		lst->iter += 100;
	if (keycode == 37)
		lst->iter -= 100;
	if (keycode == 34)
		lst->iter += 10;
	if (keycode == 40)
		lst->iter -= 10;
	if (keycode == 123)
	{
		lst->droite -= 0.2; //* (lst->droite1 - lst->droite);
		lst->droite1 -= 0.2; //* (lst->droite1 - lst->droite);
		//lst->haut += 0.5;
		//lst->haut1 -= 0.5;
	}
	if (keycode == 124)
	{
		lst->droite += 0.2; //* (lst->droite1 - lst->droite);
		lst->droite1 += 0.2; //* (lst->droite1 - lst->droite);
		//lst->haut -= 0.5;
		//lst->haut1 -= 0.5;
	}
	if (keycode == 126)
	{
		//lst->droite -= 0.5;
		//lst->droite1 += 0.5;
		lst->haut -= 0.2;// * (lst->haut1 - lst->haut);
		lst->haut1 -= 0.2; //* (lst->haut1 - lst->haut);
	}
	if (keycode == 125)
	{
		//lst->droite += 0.5;
		//lst->droite1 -= 0.5;
		lst->haut += 0.2;// * (lst->haut1 - lst->haut);
		lst->haut1 += 0.2;// * (lst->haut1 - lst->haut);
	}
	if (keycode == 86)
		lst->v2 += 0.01;
	if (keycode == 83)
		lst->v2 -= 0.01;
	if (keycode == 88)
		lst->v1 += 0.005;
	if (keycode == 85)
		lst->v1 -= 0.005;
	if (keycode == 87)
	{
		lst->haut *= 0.5;
		lst->haut1 *= 0.5;
		lst->droite *= 0.5;
		lst->droite1 *= 0.5;
	}	//lst->zoom += 1;
	if (keycode == 84)
	{
		lst->haut /= 0.5;
		lst->haut1 /= 0.5;
		//lst->zoom -= 1;
		lst->droite /= 0.5;
		lst->droite1 /= 0.5;
	}
	if (keycode == 18)
	{
		lst->color = 0X38148E;
		lst->swap_color = lst->color;
	}
	if (keycode == 19)
	{
		lst->color = 0XEC7063;
		lst->swap_color = lst->color;
	}
	if (keycode == 20)
	{
		lst->color = 0X522376;
		lst->swap_color = lst->color;
	}
	if (keycode == 21)
	{
		lst->color = 0X292121;
		lst->swap_color = lst->color;
	}
	if (keycode == 23)
	{
		lst->color = 0XFAA035;
		lst->swap_color = lst->color;
	}
	if (keycode == 22)
	{
		lst->color = 0X1DA708;
		lst->swap_color = lst->color;
	}
	if (keycode == 26)
	{
		lst->color = 0XEA89B2;
		lst->swap_color = lst->color;
	}
	if (keycode == 28)
	{
		lst->color = 0XBBC22C;
		lst->swap_color = lst->color;
	}
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
	return (0);
}
