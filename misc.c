/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaune <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 15:13:14 by emaune            #+#    #+#             */
/*   Updated: 2018/06/22 15:13:17 by emaune           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

void	swap(int *n1, int *n2)
{
	int temp;

	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}