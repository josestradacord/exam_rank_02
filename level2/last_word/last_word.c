/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:30:40 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/28 17:17:35 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	ft_last_word(char *str)
{
	int	index;
	int	start;
	int	final;

	index = ft_strlen(str) - 1;
	while (ft_isspace(str[index]))
		index--;
	final = ++index;
	index--;
	while (!ft_isspace(str[index]))
		index--;
	start = ++index;
	while ((final - start) > 0)
	{
		write(1, &str[start], 1);
		start++;
	}	
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
