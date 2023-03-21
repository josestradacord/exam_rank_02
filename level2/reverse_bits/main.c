/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:32:09 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/15 13:39:23 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char	bit;
	int				index;

	index = 7;
	while (index >= 0)
	{
		bit = (octet >> index & 1) + '0';
		write(1, &bit, 1);
		index--;
	}
}

unsigned char	reverse_bits(unsigned char octet);

int	main(void)
{
	unsigned char	n;
	unsigned char	r_n;

	n = 38;
	print_bits(n);
	//printf("El numero: %d en binario es: ", n);
	r_n = reverse_bits(n);
	write(1, "\n", 1);
	print_bits(r_n);
	return (0);
}
