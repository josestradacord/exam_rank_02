/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:07:56 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/15 10:24:56 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_bits(unsigned char octet);

int	main(void)
{
	unsigned char	n;

	n = 15;
	//printf("El numero: %d en binario es: ", n);
	ft_print_bits(n);
	return (0);
}
