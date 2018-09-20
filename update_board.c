/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_board.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 11:32:20 by emaune            #+#    #+#             */
/*   Updated: 2018/07/19 11:04:47 by emaune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

char			**update_board(t_main *var)
{
	int			y;

	y = 0;
	while (y < var->board_dimensions.rows)
	{
		get_next_line(0, &var->line);
		ft_strcpy(var->board[y], ft_strchr(var->line, ' ') + 1);
		free(var->line);
		y++;
	}
	return (var->board);
}
