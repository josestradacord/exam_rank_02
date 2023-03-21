/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:32:05 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/24 18:35:48 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_rrange(int start, int end);

int	main(void)
{
	int	*nums;
	int	index;
	int	start;
	int	end;
	int	size;

	index = 0;
	start = 0;
	end = -3;
	printf("\nDesde %i hasta %i (al revés) están los números: ", start, end);
	if (end < 0)
		size = -end - start;
	else
		size = end - start;
	nums = ft_rrange(start, end);
	while (index <= size)
	{
		printf("%i ", nums[index]);
		index++;
	}
	free(nums);
	return (0);
}
