/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 00:36:01 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/14 01:00:05 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_char_in_str(char c, char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == c)
			return (1);
		index++;
	}
	return (0);
}

int	ft_pos_char_in_str(char c, char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] == c)
			return (pos);
		pos++;
	}
	return (pos);
}

void	ft_inter(char *str1, char *str2)
{
	int	index;

	index = 0;
	while (str1[index] != '\0')
	{
		if (ft_pos_char_in_str(str1[index], str1) >= index)
			if (ft_is_char_in_str(str1[index], str2))
				write(1, &str1[index], 1);
		index++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
		ft_inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
