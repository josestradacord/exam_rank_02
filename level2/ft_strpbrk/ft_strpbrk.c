/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:44:04 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/12 17:56:45 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	index;

	if (!s1 || !s2)
		return (NULL);
	index = 0;
	while (*s1)
	{
		index = 0;
		while (s2[index])
		{
			if (*s1 == s2[index])
				return ((char *)s1);
			index++;
		}
		s1++;
	}
	return (NULL);
}
