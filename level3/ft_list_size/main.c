/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:15:53 by joestrad          #+#    #+#             */
/*   Updated: 2022/12/01 13:29:04 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list_size.h"

int	ft_list_size(t_list *begin_list);

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->data = content;
	node->next = NULL;
	return (node);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

int	main(void)
{
	t_list	**new_list;
	t_list	*node;

	*new_list = ft_lstnew((void *)1);
	node = ft_lstnew((void *)2);
	ft_lstadd_front(new_list, node);
	node = ft_lstnew((void *)3);
	ft_lstadd_front(new_list, node);
	node = ft_lstnew((void *)4);
	ft_lstadd_front(new_list, node);
	printf("Tamaño de la lista: %d\n", ft_list_size(*new_list));
	return (0);
}
