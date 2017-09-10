/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 00:05:41 by llefevre          #+#    #+#             */
/*   Updated: 2017/08/29 08:06:59 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		zoom(int keycode, int x, int y, t_tri *lst)
{
	printf("mousse %d (%d:%d)\n", keycode, x, y);
	if(keycode == 2 || keycode == 5)
	{
		lst->nb_zoom--;
		lst->zoom /= 1.5;
		lst->rv1 -= ((x - lst->rv1) / 1.5) - (x - lst->rv1);
		lst->rv2 += ((lst->rv2 - y) / 1.5) - (lst->rv2 - y);
	}
	else if(keycode == 1 || keycode == 4)
	{
		lst->nb_zoom++;
		lst->zoom *= 1.5;
		lst->rv1 -= ((x - lst->rv1) * 1.5) - (x - lst->rv1);
		lst->rv2 += ((lst->rv2 - y) * 1.5) - (lst->rv2 - y);
	}
	my_key_funct(0, lst);
	return (0);
}
