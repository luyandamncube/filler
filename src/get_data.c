/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 11:15:55 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/21 17:30:58 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		get_player(int fd, t_m *board)
{
	char	*ret;
	int		player;

	if (get_next_line(fd, &ret) == -1)
		return (-1);
	player = ft_atoi(ret + 10);
	if (player == 2)
	{
		board->token = 'X';
		board->enemy = 'O';
	}
	else
	{
		board->token = 'O';
		board->enemy = 'X';
	}
	return (1);
}

int		get_board(int fd, t_m *object)
{
	char	*ret;
	int		k;

	k = 0;
	if (get_next_line(fd, &ret) == -1)
		return (-1);
	object->x = ft_atoi(ft_strchr(ret, ' '));
	object->y = ft_atoi(ft_strrchr(ret, ' '));
	while (k < object->x + 1)
	{
		if (get_next_line(fd, &ret) == -1)
			return (-1);
		if (k > 0)
			object->grid[k - 1] = ft_strchr(ret, ' ') + 1;
		k++;
	}
	return (1);
}

int		get_piece(int fd, t_m *object)
{
	char	*ret;
	int		k;

	k = 0;
	if (get_next_line(fd, &ret) == -1)
		return (-1);
	object->x = ft_atoi(ft_strchr(ret, ' '));
	object->y = ft_atoi(ft_strrchr(ret, ' '));
	while (k < object->x)
	{
		if (get_next_line(fd, &ret) == -1)
			return (-1);
		object->grid[k] = ft_strdup(ret);
		k++;
	}
	return (1);
}
