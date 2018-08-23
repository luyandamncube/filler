/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_point.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 14:32:00 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/21 12:22:36 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	print_point(t_p *point)
{
	ft_putstr_fd(ft_itoa(point->x), 1);
	ft_putstr_fd(" ", 1);
	ft_putstr_fd(ft_itoa(point->y), 1);
	ft_putstr_fd("\n", 1);
}
