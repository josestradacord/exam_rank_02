/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:20:10 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/16 20:52:16 by joestrad         ###   ########.fr       */
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

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int	ft_wdmatch(char *str1, char *str2)
{
	int	index_1;
	int	index_2;

	index_1 = 0;
	index_2 = 0;
	while (str2[index_2] != '\0')
	{
		if (str1[index_1] == str2[index_2])
		{
			index_1++;
			index_2++;
		}
		else
			index_2++;
	}	
	return (index_1 == ft_strlen (str1));
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		if (ft_wdmatch(argv[1], argv[2]))
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
