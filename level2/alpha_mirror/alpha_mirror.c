/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:50:44 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/10 14:42:08 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_alpha_mirror(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			ft_putchar('a' + 'z' - str[index]);
		else if (str[index] >= 'A' && str[index] <= 'Z')
			ft_putchar('A' + 'Z' - str[index]);
		else
			ft_putchar(str[index]);
		index++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_alpha_mirror(argv[1]);
	write(1, "\n", 1);
	return (0);
}
