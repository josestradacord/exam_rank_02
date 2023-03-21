/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:23:40 by joestrad          #+#    #+#             */
/*   Updated: 2022/12/05 18:47:46 by joestrad         ###   ########.fr       */
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

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	ft_rev_wstr(char *str)
{
	int	len;
	int	start;
	int	end;
	int	is_end;

	len = ft_strlen(str) - 1;
	while (len > 0)
	{
		while (ft_is_space(str[len]))
			len--;
		end = len;
		while (len > -1 && !ft_is_space(str[len]))
			len--;
		start = len + 1;
		is_end = start;
		while (start <= end)
		{
			write(1, &str[start], 1);
			start++;
		}
		if (is_end != 0)
			write(1, " ", 1);
	}
}

int	main(int argc, char *argv[])
{
	char	*res;

	if (argc == 2)
		ft_rev_wstr(argv[1]);
	write(1, "\n", 1);
}
