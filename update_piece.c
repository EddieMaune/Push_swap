/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_piece.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 09:51:18 by emaune            #+#    #+#             */
/*   Updated: 2018/07/19 11:05:03 by emaune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

char		**update_piece(t_main *var)
{
	int		y;

	y = 0;
	while (y < var->piece_dimensions.rows)
	{
		get_next_line(0, &var->line);
		ft_strcpy(var->piece[y], var->line);
		free(var->line);
		y++;
	}
	return (var->piece);
}
