/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:59:04 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/11 14:14:20 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}	

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;
	int	index;

	res = 0;
	sign = 1;
	index = 0;
	while (str[index] != '\0' && ft_isspace(str[index]))
		index++;
	if (str[index] == '+' || str[index] == '-')
		if (str[index] == '-')
			sign = sign * (-1);
	index++;
	while (str[index] != '\0' && str[index] >= '0' && str[index] <= '9')
	{	
		res = (10 * res) + (str[index] - 48);
		index++;
	}
	return (res * sign);
}
