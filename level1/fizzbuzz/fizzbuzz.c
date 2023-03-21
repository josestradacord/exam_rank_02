/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:11:11 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/04 18:42:48 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	*digits;

	digits = "0123456789";
	if (n > 9)
	{
		ft_putnbr(n / 10);
		write(1, &digits[n % 10], 1);
	}
	else
		write(1, &digits[n], 1);
}

int	main(void)
{
	int	index;

	index = 1;
	while (index <= 100)
	{
		if (index % 3 == 0 && index % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (index % 3 == 0)
			write(1, "fizz\n", 5);
		else if (index % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			ft_putnbr(index);
			write(1, "\n", 1);
		}
		index++;
	}
}
