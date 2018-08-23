/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   overlap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 11:14:00 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/21 12:20:37 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		overlap(int x, int y, t_m *piece, t_m *board)
{
	int	k[5];

	k[0] = 0;
	k[2] = x;
	k[4] = 0;
	while (k[0] < piece->x)
	{
		k[1] = 0;
		k[3] = y;
		while (k[1] < piece->y)
		{
			if (piece->grid[k[0]][k[1]] == '*')
			{
				if (board->grid[k[2]][k[3]] == board->token)
					k[4]++;
				else if (board->grid[k[2]][k[3]] == board->enemy)
					return (0);
			}
			k[1]++;
			k[3]++;
		}
		k[0]++;
		k[2]++;
	}
	return (k[4]);
}
