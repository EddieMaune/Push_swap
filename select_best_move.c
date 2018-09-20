/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_best_move.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 13:33:38 by emaune            #+#    #+#             */
/*   Updated: 2018/07/19 11:06:50 by emaune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

t_coordinates				*o_algo_small_medium_board(t_main *var)
{
	t_coordinates			*best_move;

	best_move = lowest_distance(var);
	var->placement.x = best_move->x;
	var->placement.y = best_move->y;
	return (best_move);
}

t_coordinates				*o_algo_large_board(t_main *var)
{
	t_coordinates			*best_move;

	if (var->board[var->board_dimensions.rows - 1][0] != 'O')
		best_move = go_southwest(var);
	else if (!ft_strchr(var->board[var->board_dimensions.rows / 2], 'O'))
		best_move = go_northeast(var);
	else if (var->board[var->board_dimensions.rows / 2][0] != 'O')
		best_move = min_x(var);
	else
		best_move = lowest_distance(var);
	var->placement.x = best_move->x;
	var->placement.y = best_move->y;
	return (best_move);
}

t_coordinates				*x_algo_small_medium_board(t_main *var)
{
	t_coordinates			*best_move;

	best_move = lowest_distance(var);
	var->placement.x = best_move->x;
	var->placement.y = best_move->y;
	return (best_move);
}

t_coordinates				*x_algo_large_board(t_main *var)
{
	t_coordinates			*best_move;

	best_move = lowest_distance(var);
	var->placement.x = best_move->x;
	var->placement.y = best_move->y;
	return (best_move);
}

t_coordinates				*select_best_move(t_main *var)
{
	if (var->token == 'O' && var->board_dimensions.columns <= 40)
		return (o_algo_small_medium_board(var));
	else if (var->token == 'O' && var->board_dimensions.columns > 40)
		return (o_algo_large_board(var));
	if (var->token == 'X' && var->board_dimensions.columns <= 40)
		return (x_algo_small_medium_board(var));
	else if (var->token == 'X' && var->board_dimensions.columns > 40)
		return (x_algo_large_board(var));
	return (NULL);
}
