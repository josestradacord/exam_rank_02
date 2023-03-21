/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:26:58 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/29 03:03:53 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "flood_fill.h"

void	flood_fill(char **tab, t_point size, t_point begin);

char	**ft_make_area(char **zone, t_point size)
{
	char	**new;

	new = malloc(sizeof(char *) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}
	return (new);
}

int	main(void)
{
	t_point	size = {8, 5};
	char	*zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};
	t_point	begin = {7, 4};

	char	**area = ft_make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}
