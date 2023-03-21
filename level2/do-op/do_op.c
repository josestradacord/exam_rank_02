/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:58:25 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/11 12:27:57 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_do_op(char *arg1, char *arg2, char *op)
{
	int	nbr1;
	int	nbr2;
	int	res;

	nbr1 = atoi(arg1);
	nbr2 = atoi(arg2);
	if (op[0] == '+')
		res = nbr1 + nbr2;
	else if (op[0] == '-')
		res = nbr1 - nbr2;
	else if (op[0] == '*')
		res = nbr1 * nbr2;
	else if (op[0] == '/')
		res = nbr1 / nbr2;
	else
		res = nbr1 % nbr2;
	printf("%i\n", res);
}

int	main(int argc, char *argv[])
{
	if (argc == 4)
		ft_do_op(argv[1], argv[3], argv[2]);
	else
		write(1, "\n", 1);
	return (0);
}
