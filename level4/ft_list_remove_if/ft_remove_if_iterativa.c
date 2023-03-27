/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_if_iterativa.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:38:59 by joestrad          #+#    #+#             */
/*   Updated: 2023/03/02 13:17:16 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*ant;
	t_list	*del;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	del = *begin_list;
	ant = NULL;
	while (del)
	{
		if (cmp(data_ref, del->data) == 0)
		{
			if (ant == NULL)
				*begin_list = del->next;
			else
				ant->next = del->next;
			free(del);
			if (ant == NULL)
				del = *begin_list;
			else
				del = ant->next;
		}
		else
		{
			ant = del;
			del = del->next;
		}
	}
}
