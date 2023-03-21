/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:07:56 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/14 20:21:25 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int n);

int	main(void)
{
	int	nums[8] = {2, 3, -7, 5, 8, 9, 14, 7};
	int	max_nbr;

	max_nbr = max(nums, 8);
	printf("Máximo: %d\n", max_nbr);
	return (0);
}
