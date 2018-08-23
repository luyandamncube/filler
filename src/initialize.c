/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <lmncube@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 14:44:23 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/21 17:29:31 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	initialize(t_m **object)
{
	int	row;

	row = 0;
	(*object) = (t_m*)malloc(sizeof(t_m));
	(*object)->x = (int)malloc(sizeof(int));
	(*object)->y = (int)malloc(sizeof(int));
	(*object)->token = (int)malloc(sizeof(int));
	(*object)->turn = (int)malloc(sizeof(int));
	(*object)->enemy = (int)malloc(sizeof(int));
	(*object)->turn = 0;
	(*object)->grid = (char **)malloc(sizeof(char *) * 10000);
	while (row < 10000)
	{
		(*object)->grid[row] = (char *)malloc(sizeof(char) * 10000);
		row++;
	}
	(*object)->grid[row] = NULL;
}

void	initialize_(t_p **object)
{
	(*object) = (t_p*)malloc(sizeof(t_p));
	(*object)->x = (int)malloc(sizeof(int));
	(*object)->y = (int)malloc(sizeof(int));
}
