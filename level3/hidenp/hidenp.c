/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:47:16 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/24 19:01:27 by joestrad         ###   ########.fr       */
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

char	ft_hidenp(char *str1, char *str2)
{
	int	index1;
	int	index2;

	index1 = 0;
	index2 = 0;
	while (str1[index1] != '\0' && str2[index2] != '\0')
	{
		if (str1[index1] == str2[index2])
		{
			index1++;
			index2++;
		}
		else
			index2++;
	}
	if (index1 == ft_strlen(str1))
		return ('1');
	else
		return ('0');
}

int	main(int argc, char *argv[])
{
	char	res;

	if (argc == 3)
	{
		res = ft_hidenp(argv[1], argv[2]);
		write(1, &res, 1);
	}
	write(1, "\n", 1);
	return (0);
}
