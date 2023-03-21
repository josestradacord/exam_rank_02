/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:25:00 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/24 18:31:08 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*res;
	int	size;
	int	index;

	if (end < 0)
		size = -end - start;
	else
		size = end - start;
	res = (int *) malloc(size * sizeof(int));
	if (!res)
		return (NULL);
	index = 0;
	if (end >= start)
		while (index <= size)
			res[index++] = end--;
	else
		while (index <= size)
			res[index++] = end++;
	return (res);
}
