/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 22:02:30 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/25 23:44:12 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

int	ft_is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

void	ft_rstr_capitalizer(char *str)
{
	int		index;
	char	c;

	index = 0;
	while (str[index] != '\0')
	{
		if (ft_is_lower(str[index]) && \
			(ft_is_space(str[index + 1]) || str[index + 1] == '\0'))
		{
			c = str[index] - 32;
			write(1, &c, 1);
		}
		else if (ft_is_upper(str[index]) && \
				(ft_is_lower(str[index + 1]) || ft_is_upper(str[index + 1])))
		{
			c = str[index] + 32;
			write(1, &c, 1);
		}
		else
			write(1, &str[index], 1);
		index++;
	}	
}

int	main(int argc, char *argv[])
{
	int	arg;

	if (argc > 1)
	{
		arg = 1;
		while (arg < argc)
		{
			ft_rstr_capitalizer(argv[arg]);
			if (arg < argc - 1)
				write(1, "\n", 1);
			arg++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
