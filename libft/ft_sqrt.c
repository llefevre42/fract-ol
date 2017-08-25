/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 20:18:17 by llefevre          #+#    #+#             */
/*   Updated: 2017/04/29 22:24:52 by llefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int res;

	res = 0;
	if (nb == 0)
		return (0);
	while ((res * res) < nb)
		res = res + 1;
	if ((res * res) == nb)
		return (res);
	else
		return (0);
}
