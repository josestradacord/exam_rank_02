/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:58:04 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/25 15:11:08 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_pgcd(char *str1, char *str2)
{
	int	nbr1;
	int	nbr2;
	int	res;

	nbr1 = atoi(str1);
	nbr2 = atoi(str2);
	if (nbr1 > nbr2)
		res = nbr2;
	else
		res = nbr1;
	while (nbr1 % res != 0 || nbr2 % res != 0)
		res--;
	printf("%i\n", res);
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
		ft_pgcd(argv[1], argv[2]);
	else
		write(1, "\n", 1);
	return (0);
}
