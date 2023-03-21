/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:35:30 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/07 19:42:53 by joestrad         ###   ########.fr       */
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

void	ft_rev_print(char *str)
{
	int	index;

	index = ft_strlen(str);
	if (index > 0)
	{
		index--;
		while (index >= 0)
		{
			write(1, &str[index], 1);
			index--;
		}
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_rev_print(argv[1]);
	write(1, "\n", 1);
	return (0);
}
