/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:57:35 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/29 03:01:03 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void	fill(char **tab, t_point size, t_point current, char to_fill)
{
	if (current.y < 0 || current.y >= size.y || current.x < 0 || \
		current.x >= size.x || tab[current.y][current.x] != to_fill)
		return ;
	tab[current.y][current.x] = 'F';
	fill(tab, size, (t_point){current.x - 1, current.y}, to_fill);
	fill(tab, size, (t_point){current.x + 1, current.y}, to_fill);
	fill(tab, size, (t_point){current.x, current.y - 1}, to_fill);
	fill(tab, size, (t_point){current.x, current.y + 1}, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}
