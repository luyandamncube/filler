/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 14:28:22 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/21 15:38:18 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		make_move(t_m *piece, t_m *b, t_p *point)
{
	int	k[5];

	k[0] = -1;
	k[2] = 0;
	k[3] = 0;
	while (k[0]++ < b->x)
	{
		k[1] = -1;
		while (k[1]++ < b->y)
		{
			if (piece->x + k[0] < b->x + 1 && piece->y + k[1] < b->y + 1)
				if (overlap(k[0], k[1], piece, b) == 1)
					k[3] = score_gen(k[0], k[1], b);
			if (k[2] < k[3])
			{
				k[2] = k[3];
				point->x = k[0];
				point->y = k[1];
			}
		}
	}
	k[4] = k[2] == 0 ? -1 : 1;
	place_piece(point->x, point->y, piece, b);
	print_point(point);
	return (k[4]);
}
