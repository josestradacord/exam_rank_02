/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:09:15 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/28 19:27:23 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int n)
{
	int	nbr;

	nbr = 2;
	if (n <= 0)
		return (0);
	while (nbr <= (n / 2))
	{
		if (n % nbr == 0)
			return (0);
		nbr++;
	}
	return (1);
}

void	ft_fprime(int nbr)
{
	int	factor;

	if (nbr < 1)
		return ;
	if (ft_is_prime(nbr))
		printf("%i", nbr);
	else
	{
		factor = 2;
		while (!ft_is_prime(nbr))
		{
			while (nbr % factor == 0)
			{
				printf("%i*", factor);
				nbr /= factor;
			}
			factor++;
			while (!ft_is_prime(factor))
				factor++;
		}
		printf("%i", nbr);
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}
