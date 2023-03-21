/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:55:45 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/23 20:11:09 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_SIZE_H
# define FT_LIST_SIZE_H

# include <stdlib.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;
#endif
