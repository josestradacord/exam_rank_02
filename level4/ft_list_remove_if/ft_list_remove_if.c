/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:38:59 by joestrad          #+#    #+#             */
/*   Updated: 2022/12/02 13:31:46 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*node;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	node = *begin_list;
	if (cmp(data_ref, node->data) == 0)
	{
		*begin_list = node->next;
		free(node);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	node = *begin_list;
	ft_list_remove_if(&node->next, data_ref, cmp);
}
