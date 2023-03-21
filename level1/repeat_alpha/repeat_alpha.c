/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:52:39 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/07 19:12:25 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

void	ft_repeat_char(char c)
{
	int	counter;

	if (c >= 'a')
		counter = c - 'a';
	else
		counter = c - 'A';
	while (counter >= 0)
	{
		write(1, &c, 1);
		counter--;
	}
}

void	ft_repeat_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (ft_is_alpha(str[index]))
			ft_repeat_char(str[index]);
		else
			write(1, &str[index], 1);
		index++;
	}
}	

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}
