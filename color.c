/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 18:18:33 by llefevre          #+#    #+#             */
/*   Updated: 2017/08/25 08:26:44 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	put_in_black(t_tri *lst)
{
	long int	i;
	long int end;
	end = 1000 * 1000;
	i = 0;
	while (i < end - 10)
	{
		lst->img[i] = 0X000000;
		lst->img[i + 1] = 0X000000;
		lst->img[i + 2] = 0X000000;
		lst->img[i + 3] = 0X000000;
		lst->img[i + 4] = 0X000000;
		lst->img[i + 5] = 0X000000;
		lst->img[i + 6] = 0X000000;
		lst->img[i + 7] = 0X000000;
		lst->img[i + 8] = 0X000000;
		lst->img[i + 9] = 0X000000;
		i += 10;
	}
	mlx_put_image_to_window(lst->mlx, lst->win, lst->pt_img, 0, 0);
}

void	put_in_color(long int x, long int y, int nb, t_tri *lst)
{
	if (nb == lst->iter)
	{
		put_cub(x, y, lst);
	}
	else
	{
		if(nb < lst->iter)
		{
			lst->color = lst->color *  (1.33 * nb + (lst->iter / 1000)) /*>> 16*/ ;
			put_cub(x, y, lst);
		}
	}
}
