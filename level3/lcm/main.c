/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 09:47:48 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/25 14:17:01 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b);

int	main(void)
{
	unsigned int	a;
	unsigned int	b;

	a = 22;
	b = 24;
	printf("El mcm (lcm) de %u y %u es: %u\n", a, b, lcm(a, b));
	return (0);
}
