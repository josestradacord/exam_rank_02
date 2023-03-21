/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:51:15 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/17 15:22:53 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

void	ft_expand(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		while (str[index] != '\0' && ft_isspace(str[index]))
			index++;
		while (str[index] != '\0' && !ft_isspace(str[index]))
		{
			write(1, &str[index], 1);
			index++;
		}
		if (ft_isspace(str[index]) && str[index + 1] != '\0')
		{
			write(1, "   ", 3);
			index++;
		}
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_expand(argv[1]);
	write(1, "\n", 1);
	return (0);
}
