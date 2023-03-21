/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:22:05 by joestrad          #+#    #+#             */
/*   Updated: 2022/12/03 13:30:35 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	digit;

	if (n > 9)
	{
		ft_putnbr(n / 10);
		digit = (n % 10) + '0';
		write(1, &digit, 1);
	}
	else
	{
		digit = n + '0';
		write(1, &digit, 1);
	}
}

int	main(int argc, char *argv[])
{
	(void) argv;
	ft_putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}
