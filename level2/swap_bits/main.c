/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 01:01:00 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/16 01:05:01 by joestrad         ###   ########.fr       */
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

unsigned char	swap_bits(unsigned char octet);

int	main(void)
{
	unsigned char	n;
	unsigned char	s_n;

	n = 38;
	print_bits(n);
	s_n = swap_bits(n);
	write(1, "\n", 1);
	print_bits(s_n);
	return (0);
}
