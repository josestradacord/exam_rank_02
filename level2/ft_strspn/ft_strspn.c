/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:51:44 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/14 00:18:41 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ischar_instr(char c, const char *str)
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

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
	{
		if (ft_ischar_instr(s[len], accept))
			len++;
		else
			return (len);
	}
	return (len);
}
