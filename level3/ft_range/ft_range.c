/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:39:20 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/24 14:40:42 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
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
			res[index++] = start++;
	else
		while (index <= size)
			res[index++] = start--;
	return (res);
}
