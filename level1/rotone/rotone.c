/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:22:58 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/09 09:57:50 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rotone(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] >= 'a' && str[index] <= 'y') || \
			(str[index] >= 'A' && str[index] <= 'Y'))
			ft_putchar(str[index] + 1);
		else if (str[index] == 'z' || str[index] == 'Z')
			ft_putchar(str[index] - 25);
		else
			ft_putchar(str[index]);
		index++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}
