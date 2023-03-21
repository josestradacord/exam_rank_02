/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:37:59 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/14 11:44:06 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_power_of_2(unsigned int n);

int	main(void)
{
	unsigned int	number;
	int				res;

	number = 128;
	res = ft_is_power_of_2(number);
	printf("¿El numero: %u es potencia de 2? (0 no, 1 si) %i\n", number, res);
	return (0);
}
