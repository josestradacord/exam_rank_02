/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:44:45 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/05 13:16:20 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *str1, char *str2)
{
	int	index;

	index = 0;
	while (str2[index] != '\0')
	{
		str1[index] = str2[index];
		index++;
	}
	str1[index] = '\0';
	return (str1);
}
