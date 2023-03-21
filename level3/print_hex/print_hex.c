/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:40:19 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/25 16:17:05 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	res;
	int	index;

	res = 0;
	index = 0;
	while (str[index] != '\0' && str[index] >= '0' && str[index] <= '9')
	{
		res = (str[index] - 48) + 10 * res;
		index++;
	}
	return (res);
}

void	ft_print_hex_rec(int n)
{
	char	*digits;

	digits = "0123456789abcdef";
	if (n > 15)
	{
		ft_print_hex_rec(n / 16);
		write(1, &digits[n % 16], 1);
	}
	else
		write(1, &digits[n], 1);
}

void	ft_print_hex(char *str)
{
	int	res;

	res = ft_atoi(str);
	ft_print_hex_rec(res);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_print_hex(argv[1]);
	write(1, "\n", 1);
	return (0);
}
