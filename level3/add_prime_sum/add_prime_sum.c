/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 00:38:19 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/17 02:43:04 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int n)
{
	int	nbr;

	nbr = 2;
	if (n <= 1)
		return (0);
	while (nbr <= (n / 2))
	{
		if (n % nbr == 0)
			return (0);
		nbr++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
	else
		ft_putchar(n + '0');
}

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	index;

	res = 0;
	sign = 1;
	index = 0;
	while (str[index] != '\0' && \
			(str[index] >= 9 && str[index] <= 13) || str[index] == 32)
		index++;
	if (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			sign *= -1;
		index++;
	}
	while (str[index] != '\0' && str[index] >= '0' && str[index] <= '9')
	{
		res = (10 * res) + (str[index] - '0');
		index++;
	}
	return (res * sign);
}

int	main(int argc, char *argv[])
{
	int	number;
	int	sum;

	sum = 0;
	if (argc == 2)
	{
		number = ft_atoi(argv[1]);
		if (number < 0)
			write(1, "0", 1);
		else
		{
			while (number > 0)
			{
				if (ft_is_prime(number))
					sum += number;
				number--;
			}
			ft_putnbr(sum);
		}	
	}
	write(1, "\n", 1);
	return (0);
}
