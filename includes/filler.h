/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 12:11:10 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/22 14:55:55 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# define PLAY 1
# define ERROR -1
# define STOP 0
# include <stdio.h>
# include "../libft/includes/libft.h"
# include "../libft/includes/get_next_line.h"

typedef struct	s_p
{
	int			x;
	int			y;
}				t_p;

typedef struct	s_m
{
	int			x;
	int			y;
	int			token;
	int			enemy;
	int			turn;
	char		**grid;

}				t_m;

void			print_object(t_m *object);
void			print_point(t_p *point);
int				get_player(int fd, t_m *board);
int				get_board(int fd, t_m *object);
int				get_piece(int fd, t_m *object);
void			initialize(t_m **object);
void			initialize_(t_p **object);
int				score_gen(int x, int y, t_m *board);
int				abs_(int a, int b);
int				overlap(int x, int y, t_m *piece, t_m *board);
int				boundary(int x, int y, t_m *piece, t_m *board);
void			place_piece(int x, int y, t_m *piece, t_m *board);
int				make_move(t_m *piece, t_m *b, t_p *point);

#endif
