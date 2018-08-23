/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   score_gen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 11:14:23 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/22 14:35:42 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		abs_(int a, int b)
{
	if ((a - b) < 0)
		return (b - a);
	else
		return (a - b);
}

int		score_gen(int x, int y, t_m *board)
{
	int	x_cord;
	int	y_cord;
	int	score;

	score = 0;
	x_cord = board->x / 2;
	y_cord = board->y / 2;
	score = 2000 - (abs_(x, x_cord) + abs_(y, y_cord));
	return (score);
}
