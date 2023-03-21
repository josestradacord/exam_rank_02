/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:58:25 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/28 20:49:30 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_num_digits(int nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
	{
		len++;
		if (nbr == -2147483648)
		{
			nbr /= 10;
			len++;
		}
		nbr *= -1;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		len++;
	}
	len++;
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*res;
	int		len;
	int		index;

	len = ft_num_digits(nbr);
	res = (char *) malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	index = len - 1;
	if (nbr < 0)
	{
		if (nbr == -2147483648)
			return ("-2147483648");
		nbr *= -1;
		res[0] = '-';
	}
	while (nbr > 9)
	{
		res[index] = (nbr % 10) + 48;
		nbr /= 10;
		index--;
	}
	res[index] = nbr + 48;
	return (res);
}
