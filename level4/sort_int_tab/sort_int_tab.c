/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 23:53:22 by joestrad          #+#    #+#             */
/*   Updated: 2022/12/01 00:12:28 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	index;
	int				aux;

	index = 0;
	while (index < (size - 1))
	{
		if (tab[index] > tab[index + 1])
		{
			aux = tab[index];
			tab[index] = tab[index + 1];
			tab[index + 1] = aux;
			index = 0;
		}
		else
			index++;
	}
}
