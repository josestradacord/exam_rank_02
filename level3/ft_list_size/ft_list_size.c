/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:57:41 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/23 20:11:43 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_size.h"

int	ft_list_size(t_list *begin_list)
{
	int		num_elems;
	t_list	*node;

	num_elems = 0;
	node = begin_list;
	while (node != NULL)
	{
		num_elems++;
		node = node -> next;
	}
	return (num_elems);
}
