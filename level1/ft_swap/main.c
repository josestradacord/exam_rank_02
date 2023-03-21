/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:45:00 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/07 18:40:31 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int		n1;
	int		n2;

	n1 = 5;
	n2 = 7;
	printf("Antes de swap n1 = %d, n2 = %d\n", n1, n2);
	ft_swap(&n1, &n2);
	printf("Despues de swap n1 = %d, n2 = %d\n", n1, n2);
	return (0);
}
