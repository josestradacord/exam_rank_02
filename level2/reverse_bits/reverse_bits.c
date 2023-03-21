/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:54:17 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/15 13:41:06 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	res;
	int				offset;

	offset = 8;
	res = 0;
	while (offset > 0)
	{
		res = res * 2 + (octet % 2);
		octet /= 2;
		offset--;
	}
	return (res);
}
