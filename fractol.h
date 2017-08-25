/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 23:15:24 by llefevre          #+#    #+#             */
/*   Updated: 2017/08/25 01:04:37 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# include "./libft/libft.h"
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h> 		//delete
# include "mlx.h"
# include <math.h>

struct				s_tri
{
	void			*win;//[2];
	void			*win2;
	void			*pt_img;//[2];
	unsigned int	*img;//[2];
	void			*mlx;
	int				t1;
	int 			t2;
	long int		color;
	long int		swap_color;
	long double				zoom;
	long double			droite;
	long double			droite1;
	long double			haut;
	long double			haut1;
	long double			v2;
	long double			v1;
	long double			iter;
	long double			rv1;
	long double			rv2;
	char			*av;
	long double			mx;
	long double			my;
	int				nb_zoom;
};
typedef struct		 s_tri	t_tri;


int 	zoom(int keycode, int x, int y, t_tri *lst);
void	setup_interface_burn(t_tri *lst);
void	last_marge(t_tri *lst);
void	next_marge(t_tri *lst);
void	suite_marge(t_tri *lst);
int		put_cub_bis(int x, int y, t_tri *lst);
void	put_in_black(t_tri *lst);
void	put_in_color(long int x, long int y, int nb, t_tri *lst);
int		my_key_funct(int keycode, void *param);
int		put_cub(long int x, long int y, t_tri *lst);
void	tracer_man(t_tri *lst);
void	tracer_budd(t_tri *lst);
void	tracer_jul(t_tri *lst);
void	generation(t_tri *lst, int i, char **av);
void	tri_map(t_tri *lst, char **str, int i);
void	ft_error(int i);
int 	put_mousse(int keycode, int x, int y, void *param);
void	put_mousse_next(int key, int x, int y, t_tri *lst);


#endif
