/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:05:01 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/09 13:06:12 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	if (!str)
		return (len);
	while (str[len] != '\0')
		len++;
	return (len);
}

void	ft_search_and_replace(char *str, char *search, char *replace)
{
	int	index;
	int	len_s;
	int	len_r;

	index = 0;
	len_s = ft_strlen(search);
	len_r = ft_strlen(replace);
	if (len_s == 1 && len_r == 1)
	{
		while (str[index] != '\0')
		{
			if (str[index] == search[0])
				write(1, &replace[0], 1);
			else
				write(1, &str[index], 1);
			index++;
		}
	}
	else
		return ;
}

int	main(int argc, char *argv[])
{
	if (argc == 4)
		ft_search_and_replace(argv[1], argv[2], argv[3]);
	write(1, "\n", 1);
	return (0);
}
