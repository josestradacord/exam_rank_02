/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:00:47 by joestrad          #+#    #+#             */
/*   Updated: 2022/12/02 14:08:15 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int));

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + '0');
}

int	ft_ascending(int a, int b)
{
	return (a <= b);
}

t_list	*ft_new_elem(int data)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (node = NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

void	ft_list_foreach_space(t_list *begin_list, void (*f)(int))
{
	while (begin_list != NULL)
	{
		if (begin_list->data)
			(*f)(begin_list->data);
		ft_putchar(' ');
		begin_list = begin_list->next;
	}
}

int	main(void)
{
	t_list	*test_list;

	test_list = ft_new_elem(42);
	test_list->next = ft_new_elem(666);
	test_list->next->next = ft_new_elem(69);
	test_list->next->next->next = ft_new_elem(420);
	test_list->next->next->next->next = ft_new_elem(669);
	test_list->next->next->next->next->next = ft_new_elem(42);
	test_list->next->next->next->next->next->next = ft_new_elem(0);
	ft_list_foreach_space(test_list, (void *)ft_putnbr);
	sort_list(test_list, ft_ascending);
	ft_putchar('\n');
	ft_list_foreach_space(test_list, (void *)ft_putnbr);
	ft_putchar('\n');
	return (0);
}
