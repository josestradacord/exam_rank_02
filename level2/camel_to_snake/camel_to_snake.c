/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:07:08 by joestrad          #+#    #+#             */
/*   Updated: 2022/12/09 14:24:48 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}

int	ft_upper_count(char *str)
{
	int	index;
	int	upper_count;

	index = 0;
	upper_count = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
			upper_count++;
		index++;
	}
	return (upper_count);
}

char	*ft_camel_to_snake(char *str, int len_snake)
{
	char	*res;
	int		index_c;
	int		index_s;

	index_c = 0;
	index_s = 0;
	res = (char *) malloc((len_snake + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (str[index_c] != '\0')
	{
		if (str[index_c] >= 'A' && str[index_c] <= 'Z')
		{
			res[index_s] = '_';
			index_s++;
			res[index_s] = str[index_c] + 32;
			index_s++;
		}
		else
			res[index_s++] = str[index_c];
		index_c++;
	}
	res[index_s] = '\0';
	return (res);
}

int	main(int argc, char *argv[])
{
	char	*snake;
	int		len_camel;
	int		len_snake;

	if (argc == 2)
	{
		len_camel = ft_strlen(argv[1]);
		len_snake = len_camel + ft_upper_count(argv[1]);
		snake = ft_camel_to_snake(argv[1], len_snake);
		ft_putstr(snake);
		free(snake);
	}
	write(1, "\n", 1);
	return (0);
}
