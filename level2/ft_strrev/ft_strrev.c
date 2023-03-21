/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:17:09 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/13 20:18:53 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strrev(char *str)
{
	int		len;
	int		index;
	char	c;

	len = ft_strlen(str);
	index = 0;
	while (index < (len / 2))
	{
		c = str[index];
		str[index] = str[len - index - 1];
		str[len - index - 1] = c;
		index++;
	}
	return (str);
}
