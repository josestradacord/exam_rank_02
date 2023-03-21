/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:45:37 by joestrad          #+#    #+#             */
/*   Updated: 2022/12/09 14:33:59 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
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

int	ft_count_underscore(char *str)
{
	int	index;
	int	under_count;

	index = 0;
	under_count = 0;
	while (str[index] != '\0')
	{
		if (str[index] == '_')
			under_count++;
		index++;
	}
	return (under_count);
}

char	*ft_snake_to_camel(char *str, int len)
{
	char	*res;
	int		index_c;
	int		index_s;

	res = (char *) malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	index_c = 0;
	index_s = 0;
	while (str[index_s] != '\0')
	{
		if (str[index_s] == '_')
		{
			res[index_c] = str[index_s + 1] - 32;
			index_c++;
			index_s++;
		}
		else
			res[index_c++] = str[index_s];
		index_s++;
	}
	res[index_c] = '\0';
	return (res);
}

int	main(int argc, char *argv[])
{
	char	*camel;
	int		snake_len;
	int		camel_len;

	if (argc == 2)
	{
		snake_len = ft_strlen(argv[1]);
		camel_len = snake_len - ft_count_underscore(argv[1]);
		camel = ft_snake_to_camel(argv[1], camel_len);
		ft_putstr(camel);
		free(camel);
	}
	write(1, "\n", 1);
	return (0);
}
