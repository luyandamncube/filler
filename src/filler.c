/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 14:25:15 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/21 16:48:39 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		main(void)
{
	int		fd;
	t_m		*board;
	t_m		*piece;
	t_p		*point;

	fd = 0;
	initialize(&board);
	initialize(&piece);
	initialize_(&point);
	if ((get_player(fd, board)) == ERROR)
		perror("Couldn't get player");
	while (PLAY)
	{
		if ((get_board(fd, board)) == ERROR)
			perror("Couldn't get board");
		else if ((get_piece(fd, piece)) == ERROR)
			perror("Couldn't get piece");
		else if (make_move(piece, board, point) == ERROR)
		{
			ft_putstr_fd("0 0\n", 1);
			exit(1);
		}
		board->turn++;
	}
	return (0);
}
