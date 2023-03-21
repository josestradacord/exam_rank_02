/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:00:22 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/15 10:24:10 by joestrad         ###   ########.fr       */
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
