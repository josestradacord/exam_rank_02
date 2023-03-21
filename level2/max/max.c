/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:00:55 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/14 20:07:23 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int	*tab, unsigned int n)
{
	unsigned int	index;
	int				max_value;

	if (n == 0)
		max_value = 0;
	else
	{
		index = 0;
		max_value = tab[index];
		while (index < n)
		{
			if (tab[index] > max_value)
				max_value = tab[index];
			index++;
		}
	}
	return (max_value);
}
