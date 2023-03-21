/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:29:06 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/26 02:04:15 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	res;
	int	index;

	index = 0;
	res = 0;
	while (str[index] != '\0')
	{
		res = (10 * res) + (str[index] - '0');
		index++;
	}
	return (res);
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

void	ft_tab_mult(char *str)
{
	int	nbr;
	int	index;

	nbr = ft_atoi(str);
	index = 1;
	while (index <= 9)
	{
		ft_putnbr(index);
		write(1, " x ", 3);
		ft_putnbr(nbr);
		write(1, " = ", 3);
		ft_putnbr(index * nbr);
		write(1, "\n", 1);
		index++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_tab_mult(argv[1]);
	write(1, "\n", 1);
	return (0);
}
