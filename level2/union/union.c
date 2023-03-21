/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:52:14 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/16 19:20:31 by joestrad         ###   ########.fr       */
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
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == c)
			return (index);
		index++;
	}
	return (index);
}

void	ft_union(char *str1, char *str2)
{
	int	index;

	index = 0;
	while (str1[index] != '\0')
	{
		if (ft_pos_char_in_str(str1[index], str1) >= index)
			write(1, &str1[index], 1);
		index++;
	}
	index = 0;
	while (str2[index] != '\0')
	{
		if (!ft_is_char_in_str(str2[index], str1) && \
				ft_pos_char_in_str(str2[index], str2) >= index)
			write(1, &str2[index], 1);
		index++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
